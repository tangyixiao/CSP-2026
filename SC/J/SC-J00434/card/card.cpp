#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
int n,m;
int a[N],cnt[N],vis[N],to[N],in[N];
queue<int> q;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],cnt[a[i]]++;
	vis[a[n]]=1;
	for(int i=n-1;i>=1;i--){
		if(vis[a[i]]) continue;
		to[a[i]]=a[i+1],vis[a[i]]=1,in[a[i+1]]++;
	}
	for(int i=1;i<=m;i++){
		if(in[i]==0) q.push(i);
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		if(!to[u]) continue;
		cnt[to[u]]+=cnt[u];
		if(--in[to[u]]==0) q.push(to[u]);
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<' ';
	return 0;
}