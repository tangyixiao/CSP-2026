#include<bits/stdc++.h>
using namespace std;
int a[500005],ls[500005],pr[500005],ans[500005],vis[500005],as[500005],rd[500005];
int gs[500005];
void dfs(int i,int res){
	ans[a[i]]+=res*(res+1)/2;
	cout<<i<<" ";
	if(as[i])dfs(as[i],res+1);
}
queue<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=m;i++)ls[i]=1e7;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pr[i]=ls[a[i]];
		ls[a[i]]=i;
		gs[a[i]]++;
	}
	for(int i=n;i>0;i--){
		if(ls[a[i]]!=i)continue;
		int cnt=i+1;
		if(ls[a[cnt]]!=cnt) cnt=ls[a[cnt]];
		if(i<n)as[i]=cnt,rd[cnt]++;
	}
	for(int i=1;i<=n;i++){
		if(ls[a[i]]==i&&rd[i]==0)q.push(i);
	}
	while(q.size()){
		int i=q.front();q.pop();
		ans[a[i]]+=gs[a[i]];
		if(!as[i])continue;
		gs[a[as[i]]]+=gs[a[i]];
		rd[as[i]]--;
		if(rd[as[i]]==0)q.push(as[i]);
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
