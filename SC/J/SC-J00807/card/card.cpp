#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+4;
int n,m;
vector<int>a,dp,G[MAXN],ans,sz;
map<int,int>mp;//(i,j):i前j出现位置
void dfs(int u,int fa){
	sz[u]=1;
	for(int v:G[u]){
		if(v==fa) continue;
		dfs(v,u),sz[u]+=sz[v];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	a.resize(n+4),ans.resize(m+4),
	dp.resize(n+4),sz.resize(n+4);
	fill(ans.begin(),ans.end(),0);
	for(int i=1;i<=n;i++) cin>>a[i];
	mp[a[n]]=n,dp[n]=a[n];
	for(int i=n-1;i>=1;i--){
		if(mp.count(a[i])) G[mp[a[i]]].push_back(i),dp[i]=0;
		else G[i+1].push_back(i),dp[i]=a[i];
		mp[a[i]]=i;
	}
	dfs(n,n);
	for(int i=1;i<=n;i++)
		ans[dp[i]]+=sz[i];
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}