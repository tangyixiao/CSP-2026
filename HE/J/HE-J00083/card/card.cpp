#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=5e5+10;

ll n,m,a[N],mp[N],nxt[N],ans[N],sz[N];
vector<ll> e[N];

inline void dfs(ll u){
	
	sz[u]=1;
	
	for(auto v:e[u]) dfs(v),sz[u]+=sz[v];
	ans[a[u]]+=sz[u];
	
	return;
}

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int i=n;i>=1;i--) nxt[i]=(mp[a[i]]?mp[a[i]]:i),mp[a[i]]=(mp[a[i]]?mp[a[i]]:i);

	for(int i=n;i>=1;i--) e[nxt[i]+1].push_back(i);
	
	dfs(n+1);
	
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	cout<<'\n';
	
	return 0;
}

/*
9:45 meow AK!
没成功 1h AK，可惜了/kel 
*/
