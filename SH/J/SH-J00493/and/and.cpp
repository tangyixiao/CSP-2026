#include<bits/stdc++.h>
using namespace std;

int n,m;
int vis[200010];
int a[200010];
int f[2][200010];
int ans = 0;

void dfs(int x,int res)
{
    if (x > m)
    {
        ans = max(ans,res);
        return;
    }
    for (int i = 1;i <= n;i++)
    {
        if (vis[i] == 1) {continue;}
        //cout << a[i] << " ";
        if (x == 1) res = a[i];
        vis[i] = 1;
        dfs(x+1,res&a[i]);
        vis[i] = 0;
    }
    return;
}

int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) cin >> a[i];
    dfs(0,0);
    cout << ans;
}
