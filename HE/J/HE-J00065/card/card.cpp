#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+10,M = 5e5+10;
int n,m,a[N],t[M],val[N],size[N],flag[M],ans[M];
vector<int> g[N];

void dfs1(int u){
	size[u]=1;
	for(int i=0;i<g[u].size();i++){
		int v=g[u][i];
		dfs1(v);
		size[u]+=size[v];
	}
}
void dfs2(int u){
	if(flag[val[u]]==0) ans[val[u]]+=size[u];
	flag[val[u]]=1;
	for(int i=0;i<g[u].size();i++){
		int v=g[u][i];
		dfs2(v);
	}
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(t[a[i]]){
			g[t[a[i]]].push_back(i);
			//cerr<<t[a[i]]+1<<"->"<<i<<endl;
		}else{
			g[i+1].push_back(i);
			val[i]=a[i];
			//cerr<<i+1<<"->"<<i<<" w="<<val[i]<<endl;
		}
		t[a[i]]=i;
	}
	dfs1(n+1);
	dfs2(n+1);
	for(int i=1;i<=m-1;i++) cout<<ans[i]<<" ";
	cout<<ans[m]<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
