#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int dp[200005], a[200005], n, m, vis[200005], ans;

int dfs(int t, int ret)//t shi hai xuan ji ge
{
    if(t == 0) return ret;
    int rret = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            vis[i] = true;
            rret = max(rret, dfs(t - 1, ret & a[i]));
            vis[i] = false;
        }
    }
    return rret;
}
int main()
{
    freopen("and.in", "r", stdin);
    freopen("and.out", "w", stdout);
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    if(n <= 20)
    {
        for(int i = 1; i <= n; i++)
        {
            vis[i] = true;
            ans = max(dfs(m - 1, a[i]), ans);
            vis[i] = false;
        }
    }
    else if(m == 1)
    {
        for(int i = 1; i <= n; i++)
            ans = max(ans, a[i]);
    }
    else if(m == 2)
    {
        for(int i = 1; i <= n; i++)
            for(int j = i + 1; j <= n; j++)
                ans = max(ans, a[i] & a[j]);
    }
    else if(m == n)
    {
        ans = a[1];
        for(int i = 2; i <= n; i++)
            ans &= a[i];
    }
    else if(m == n - 1)
    {
        ans = a[1];
        for(int i = 2; i <= n; i++)
            ans &= a[i];
    }
    cout<<ans<<endl;
    return 0;
}
