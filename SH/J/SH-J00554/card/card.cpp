#include<bits/stdc++.h>
using namespace std;
#define N 500005
#define M 300005
int n,m,a[N],ct[M];
int que[N],lst[M];
vector<int> edge[N];
int siz[N],pos[N],val[N];
void dfs(int u){
	siz[u]=1;
	for(int v:edge[u]){
		dfs(v);
		siz[u]+=siz[v];
	}
	ct[pos[u]]+=siz[u]*val[u];
}
int main(){ 
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(lst[a[i]]!=0){
			edge[lst[a[i]]].push_back(i);
		}
		else{
			edge[i+1].push_back(i);
			pos[i]=a[i],val[i]=1;
		}
		lst[a[i]]=i;
	}	
	dfs(n+1);
	for(int i=1;i<=m;i++){
		cout<<ct[i]<<' ';
	}
	return 0;
} 
