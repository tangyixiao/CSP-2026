#include<bits/stdc++.h>
using namespace std;
const int N=5e5,M=3e5;
struct node{
	int x,w;
};
int a[N+2],t[M+2],ans[M+3],cnt[N+3];
vector<vector<node> >g(N+3);
void dfs(int u){
	for(int i=0;i<g[u].size();i++){
		node v=g[u][i];
		dfs(v.x);
		ans[v.w]=cnt[v.x];
		cnt[u]+=cnt[v.x];
	}
	cnt[u]++;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(t[a[i]]==0) g[i+1].push_back({i,a[i]});
		else g[t[a[i]]].push_back({i,0});
		t[a[i]]=i;
	}
	dfs(n+1);
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 