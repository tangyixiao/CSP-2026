#include<bits/stdc++.h>
using namespace std;
const int N=6e5+7;
vector<int> g[N];
int a[N],b[N],c[N],d[N],vis[N];
void dfs(int u){
	d[u]=b[u];
	for(auto it:g[u]){
		dfs(it);
		d[u]+=d[it];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,i,j,f=1,fl=1,cnt=0;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(i=1;i<=m;i++) c[i]=0;
	for(i=n;i>0;i--){
		if(!c[a[i]]){
			c[a[i]]=i;
			vis[i]=1;
		}
	}
	for(i=1;i<=m;i++){
		g[a[c[i]+1]].push_back(i); 
	}
	dfs(a[n]);
	for(i=1;i<=m;i++){
		cout<<d[i]<<' ';
	}
	return 0;
}

