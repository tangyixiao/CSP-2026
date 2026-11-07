#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m, a[300005], ans[300005];
bool vis[300005];

int main()
{
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            if(vis[a[j]])
                for(int k = 1; k <= m; k++)
                    vis[k] = false;
            vis[a[j]] = true;
        }
        for(int j = 1; j <= m; j++)
            if(vis[j]) ans[j]++;
        for(int k = 1; k <= m; k++)
            vis[k] = false;
    }
    for(int i = 1; i <= m; i++)
        cout<<ans[i]<<" ";
    return 0;
}
