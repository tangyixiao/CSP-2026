#include<bits/stdc++.h>
using namespace std;
vector<long long>g[100005];
vector<pair<long long>>gw[100005];
long long w[100005],dp[100005][2],dfs[100005],dep[100005];
fa[100005][20],sz[100005],vis[100005];

void dfs(long long u,long long p)
{
	dp[u][0]=0;dp[u][1]=w[u];
	for(long long v:g[u])if(v!=p)
	{
		dfs1(v,u);
		dp[u][0]=dp[u][0]+min(dp[v][0],dp[v][1]);
		dp[u][1]=dp[u][1]+dp[v][0];
	}
}

int main()
{
	freopen("hub.in","r",stdin);
	freopen("hub.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,m;
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    cin>>w[i];
    for(long long i=1;i<=n;i++)
	{
    	long long u,v,ww;
    	cin>>u>>v;
    	g[u].push_back(v,ww).emplace_back(u,ww);
    	dfs1(1,0);cout<<min(dp[1][0],dp[1][1])<<"\n";
	}
    return 0;
}      

