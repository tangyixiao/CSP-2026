#include <iostream>
using namespace std;
int n,m,dp[200005][2],vis[200005][2],ans;
long long a[200005];
int p[35];
bool cmp(int x,int y)
{
    return x > y;
}
void dfs(int step,int use,int sum)
{
    if(use == m)
    {
        ans = max(ans,sum);
        return;
    }
    if(step == n+1) return;
    if(sum == 0) sum = a[step];
    dfs(step+1,use+1,sum&a[step]);
    dfs(step+1,use,sum);

}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    p[0] = 1;
    p[1] = 2;
    for(int i=2;i<=31;i++)
    {
        p[i] = p[i-1] * 2;
    }
    if(m == 1)
    {
        int maxn = -1e8;
        for(int i=1;i<=n;i++)
        {
            if(a[i] >= maxn) maxn = a[i];
        }
        cout << maxn;
    }
    else if(m == n)
    {
        int maxn = a[1];
        for(int i=2;i<=n;i++) maxn &= a[i];
        cout << maxn;
    }
    else if(m == 2)
    {
        int maxn = -1e8;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[i] & a[j] >= maxn)
                {
                    maxn = a[i] & a[j];
                }
            }
        }
        cout << maxn;
    }
    else if(m == n-1)
    {
        int num = a[1];
        for(int i=2;i<=n;i++)
        {
            num &= a[i];
        }
        int maxn = -1e8;
        for(int i=1;i<=n;i++)
        {
            if((num | a[i]) >= maxn)
            {
                maxn = num | a[i];
            }
        }
        cout << maxn;
    }
    else
    {
        bool flag = false;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=31;j++)
            {
                if(a[i] == p[j]) flag = true;
            }
            if(flag == false) break;
            flag = false;
        }
        if(flag)
        {
            long long minn = 1e10;
            for(int i=1;i<=n;i++)
            {
                if(a[i] <= minn) minn = a[i];
            }
            cout << minn ;
            return 0;
        }
        bool flag2 = true;
        for(int i=1;i<=n;i++)
        {
            if(a[i] != i-1) flag2 = false;
        }
        if(flag2)
        {
            if(n/2 > m)
            {
                cout << 0;
            }
            else
            {
                cout << p[n/2-1];
            }
            return 0;
        }
        dfs(2,1,a[1]);
        dfs(1,0,0);
        cout << ans;
    }


}
