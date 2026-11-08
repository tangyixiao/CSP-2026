#include<bits/stdc++.h>
//#define int long long
using namespace std;
int ans[300005],n,m,a[500005],t[500005],fa[500005],vis[300005],nxt[300005];
int find(int u){
	if(fa[u]==u)return u;
	else return fa[u]=find(fa[u]);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!vis[a[i]])fa[i]=i,nxt[i]=i+1;
		else fa[i]=vis[a[i]],nxt[i]=nxt[vis[a[i]]];
		vis[a[i]]=i;
		t[find(i)]++;
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]+=t[i];
		t[find(i+1)]+=t[i];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}

