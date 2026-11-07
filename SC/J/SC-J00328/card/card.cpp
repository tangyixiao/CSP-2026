#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],nxt[N],ans[N];
struct node{
	int nxt,val;
}f[N];
void dfs(int u){
	if(u==n+1) return;
	ans[f[u].val]++;
	dfs(f[u].nxt);
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	f[n].nxt=n+1;
	f[n].val=a[n];
	nxt[a[n]]=n;
	for(int i=n-1;i>=1;i--){
		if(!nxt[a[i]]){
			f[i].nxt=i+1;
			f[i].val=a[i];
		}
		else{
			f[i].val=0;
			f[i].nxt=nxt[a[i]];
		}
		nxt[a[i]]=i;
	}
	for(int i=n;i>=1;i--){
		dfs(i);
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}
/*
#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],h[N],to[N],nxt[N],val[N],ans[N],cnt=0,pre[N];
int dis[N];
int dfs(int u,int fa){
int k;
dis[u]=dis[fa]+1;
if(!h[u]){
return u;
}
for(int i=h[u];i;i=nxt[i]){
int v=to[i];
if(v!=fa){
k=dfs(v,u);
if(val[i]){
ans[val[i]]+=dis[k]-dis[u];
}
}
}
return k;
}
void add(int u,int v,int w){
val[++cnt]=w;
to[cnt]=v;
nxt[cnt]=h[u];
h[u]=cnt;
}
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
ios::sync_with_stdio(false);
cin.tie(nullptr),cout.tie(nullptr);
cin>>n>>m;
for(int i=1;i<=n;i++){
cin>>a[i];
}
add(n+1,n,a[n]);
pre[a[n]]=n+1;
for(int i=n-1;i>=1;i--){
if(!pre[a[i]]){
add(i+1,i,a[i]);
}
else{
add(pre[a[i]],i,0);
}
pre[a[i]]=i;
}
dfs(n,n);
ans[a[n]]=n;
for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}
*/