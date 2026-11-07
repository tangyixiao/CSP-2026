#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[500010],b[300010],sz[500010];
vector<int> G[500010];
void dfs(int u,int fa){
	sz[u]=1;
	for(int i=0;i<G[u].size();i++){
		if(G[u][i]!=fa)dfs(G[u][i],u),sz[u]+=sz[G[u][i]];
	} 
} 
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		if(b[a[i]]==0){
			b[a[i]]=i;
			if(i!=n)G[i].push_back(i+1),G[i+1].push_back(i); 
		}
		else {
			G[i].push_back(b[a[i]]);
			G[b[a[i]]].push_back(i);
		}
	}
	dfs(n,0);
	for(int i=1;i<=m;i++){
		cout<<sz[b[i]];
		if(i<m)cout<<" ";
	}
	return 0;
}
//Êó±êºÜ¿¨£¡£¡ 
