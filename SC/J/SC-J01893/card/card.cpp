#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 5e5+5,M = 3e5+5;
int cnt[M],a[N],lst[M],ans[M];
vector<int>g[M];
void dfs(int u){
	int res=cnt[u];
	for(int v:g[u]){
		dfs(v);
		res+=ans[v];
	}
	ans[u]=res;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++,lst[a[i]]=i;
	}
	int root=a[n];
	for(int i=1;i<=m;i++)if(lst[i]!=n){
		g[a[lst[i]+1]].push_back(i);
	}
	dfs(root);
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}