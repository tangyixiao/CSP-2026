#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N=7e5+10;
int a[N],cnt[N];
int ans[N];
vector<int> g[N];
int fa[N],sz[N];
int last[N];
inline int read()
{
    int x=0;
    char c=getchar();
    while(c<'0'||c>'9') c=getchar();
    while(c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
    return x;
}
void dfs(int u)
{
    // cout<<"u:"<<u<<" sz:"<<sz[u]<<'\n';
    sz[u]=1;
    for(int i=1;i<(int)(g[u].size());i++)
    {
        int v=g[u][i];
        if(v==fa[u]) continue;
        dfs(v);
        sz[u]+=sz[v];
    }
}
signed main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n=read(),m=read();
    for(int i=1;i<=n;i++) a[i]=read();
    for(int i=n;i>=1;i--)
    {
        int now=n-i+1;
        if(cnt[a[i]]==0)
        {
            fa[now]=now-1;
            last[a[i]]=now;
        }
        else fa[now]=last[a[i]];
        cnt[a[i]]++;
    }
    for(int i=1;i<=n;i++) g[fa[i]].push_back(i);
    dfs(1);
    for(int i=1;i<=m;i++) printf("%lld ",sz[last[i]]);
    printf("\n");
    return 0;
}