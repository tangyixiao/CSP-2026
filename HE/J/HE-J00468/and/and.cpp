#include <bits/stdc++.h>
using namespace std;
const int nn=200005;
long long n,m,a[nn],me[nn],ansc;
void dfs(int deep)
{
    if(deep>m)
    {
        long long ans=me[1]&me[2];
        for(int i=3;i<=m;i++)
        {
           ans&=me[i];
        }
        ansc=max(ansc,ans);
        return;
    }
    for(int i=deep;i<=n;i++)
    {
        //if(i>n-m+deep)break;
        me[deep]=a[i];
        dfs(deep+1);
    }
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
    if(m==1)
    {
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            ans=max(ans,a[i]);
        }
        cout << ans;
        return 0;
    }
    else if(m==2)
    {
        long long ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                ans=max(ans,a[i]&a[j]);
            }
        }
        cout << ans;
        return 0;
    }
    else if(m==n)
    {
        long long ans=0;
        ans=a[1]&a[2];
        for(int i=3;i<=n;i++)
        {
            ans&=a[i];
        }
        cout << ans;
        return 0;
    }
    else if(m==n-1)
    {
        long long ans;

        for(int i=3;i<=n;i++)
        {
            long long anstest=a[1]&a[2];
            for(int j=3;j<=n;j++)
            {
                if(j==i)continue;
                anstest&=a[j];
            }
            ans=max(ans,anstest);
        }
        cout << ans;
        return 0;
    }
    else
    {
        dfs(1);
        cout << ansc;
        return 0;
    }


    return 0;
}
