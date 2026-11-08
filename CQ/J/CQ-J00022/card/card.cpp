#include<bits/stdc++.h>
using namespace std;
namespace csp{
	int n,m,a[500005],lst[300005];
	int hd[500005],nxt[500005],to[500005],cnt;
	void add(int u,int v){
		nxt[++cnt]=hd[u];
		hd[u]=cnt;
		to[cnt]=v;
	}
	int sz[500005],ans[300005];
	void dfs(int u){
		sz[u]=1;
		for(int i=hd[u];i;i=nxt[i]){
			int v=to[i];
			dfs(v);
			sz[u]+=sz[v];
		}
		ans[a[u]]+=sz[u];
	}
	int main(){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			lst[a[i]]=i;
		}
		for(int i=1;i<=n;i++){
			add(lst[a[i]]+1,i);
		}
		dfs(n+1);
		for(int i=1;i<m;i++){
			cout<<ans[i]<<' ';
		}
		cout<<ans[m];
		return 0;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	csp::main();
	return 0;
}
