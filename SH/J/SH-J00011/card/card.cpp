#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],lst[300005],nxt[500005],sum[500005];
vector<int>g[500005];
bool on[500005];
void dfs(int p,int fa){
	bool f=0;
	if(!on[a[p]])f=1;
	on[a[p]]=1;
	sum[p]=1;
	for(int i=0;i<g[p].size();i++){
		if(g[p][i]==fa){
			continue;
		}
		dfs(g[p][i],p);
		sum[p]+=sum[g[p][i]];
	}
	if(f){
		ans[a[p]]+=sum[p];
	}
	on[a[p]]=0;
	return;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(lst[a[i]]){
			nxt[lst[a[i]]]=i;
		}
		lst[a[i]]=i;
	}
	for(int i=1;i<n;i++){
		if(nxt[i]){
			g[i].push_back(nxt[i]);
			g[nxt[i]].push_back(i);
		} 
		else{
			g[i].push_back(i+1);
			g[i+1].push_back(i);
		}
	}
	dfs(n,0);
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
