#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],last[300005],ans[300005],fa[300005],d[300005];
queue<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		last[a[i]]=i;
		ans[a[i]]++;
	}
	for(int i=1;i<=m;++i){
		fa[i]=a[last[i]+1];
		d[fa[i]]++;
	}
	for(int i=1;i<=m;++i) if(!d[i]) q.push(i);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		d[fa[u]]--;
		ans[fa[u]]+=ans[u];
		if(!d[fa[u]]) q.push(fa[u]);
	}
	for(int i=1;i<=m;++i) cout<<ans[i]<<' ';
	return 0;
}
