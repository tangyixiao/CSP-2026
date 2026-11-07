#include<bits/stdc++.h>
using namespace std;
const int N=500100;
int n,m,a[N],fa[N],sz[N],g[N];
int main(){
	freopen("card.in","r",stdin),freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!g[a[i]]) g[a[i]]=i,fa[i]=i+1;
		else fa[i]=g[a[i]];
	}
	for(int i=1;i<=n;i++) sz[i]++,sz[fa[i]]+=sz[i];
	for(int i=1;i<=m;i++) cout<<sz[g[i]]<<' ';
	return 0;
}