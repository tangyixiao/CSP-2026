#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005];
int tong[300005];
pair<int,int> p[500005];
int head[500005];
int rd[500005];
int to[500005];
int nxt[500005],tot;
void add(int x,int y){
	to[++tot]=y;
	rd[y]++;
	nxt[tot]=head[x];
	head[x]=tot;
}
int ans[300005];
int cnt[500005];
queue <int> q;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(tong[a[i]]==0){
			p[i]=make_pair(1,a[i]);
			if(i!=n) add(i,i+1);
		}else{
			p[i]=make_pair(0,0);
			add(i,tong[a[i]]);
		}
		tong[a[i]]=i;
	}
	for(int i=1;i<=n;i++) if(rd[i]==0) q.push(i);
	while(!q.empty()){
		int u=q.front();q.pop();
		cnt[u]++;
		if(p[u].first!=0) ans[p[u].second]=cnt[u];
		for(int i=head[u];i;i=nxt[i]){
			int v=to[i];
			rd[v]--,cnt[v]+=cnt[u];
			if(rd[v]==0) q.push(v);
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';cout<<'\n';
	return 0;
} 
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
