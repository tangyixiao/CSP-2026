#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const long long N = 2e5 + 5;
long long n,m,a[N],sum;
long long num[40],id[40][N];
bool cmp(long long x, long long y)
{
    return x > y;
}
string DtoM(long long num)
{
    string s = "";
    while(num)
    {
        int u = num % 2;
        if(u == 1) s = "1" + s;
        else s = "0" + s;
        num /= 2;
    }
    return s;
}
long long v[N];
void dfs(int step, int l)
{
    if(step > m)
    {
        long long sum1 = v[1];
        for(int i = 2 ; i <= m ; i++) sum1 &= v[i];
        sum = max(sum, sum1);
        return;
    }
    for(int i = l ; i <= n ; i++)
    {
        v[step] = a[i];
        dfs(step + 1, i + 1);
    }
}
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    bool flag = true;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= n ; i++)
    {
        if(a[i] != i - 1)
        {
            flag = false;
            break;
        }
    }
    sort(a + 1, a + n + 1, cmp);
    if(m == 1)
    {
        cout << a[1];
        return 0;
    }
    if(m == n)
    {
        long long ans = a[1];
        for(int i = 2 ; i <= n ; i++) ans &= a[i];
        cout << ans;
        return 0;
    }
    if(m == 2)
    {
        long long ans = 0;
        for(int i = 1 ; i <= n - 1 ; i++)
        {
            for(int j = i + 1 ; j <= n ; j++)
            {
                ans = max(ans, a[i] & a[j]);
            }
        }
        cout << ans << '\n';
        return 0;
    }
    if(a[1] <= 4 || flag)
    {
        long long ans = a[1];
        for(int i = 2 ; i <= m ; i++) ans &= a[i];
        cout << ans;
        return 0;
    }
    if(n <= 20 && m <= n)
    {
        dfs(1,1);
        cout << sum;
        return 0;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        string t = DtoM(a[i]);
        int len = t.size();
        for(int j = t.size() - 1 ; j >= 0 ; j--)
        {
            if(t[j] == '1')
            {
                int temp = t.size() - j;
                num[temp]++;
                id[temp][num[temp]] = i;
            }
        }
    }
    long long ans;
    for(int i = 30 ; i >= 1 ; i--)
    {
        if(num[i] >= m)
        {
            ans = a[id[i][1]];
            for(int j = 2 ; j <= m ; j++)
            {
                ans = ans & a[id[i][j]];
            }
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}