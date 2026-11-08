#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],wz[300005];
struct node{
	int to,w;
};
vector<node> g[500005];
int dfs(int i){
	int sl=1;
	for(int j=0;j<g[i].size();j++){
		int tp=dfs(g[i][j].to);
		sl+=tp,b[g[i][j].w]+=tp;
	}
	return sl;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!wz[a[i]]) g[i+1].push_back({i,a[i]});
		else g[wz[a[i]]].push_back({i,0});
		wz[a[i]]=i;
	}
	dfs(n+1);
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}
