#include<bits/stdc++.h>
using namespace std;
namespace zjp{
	const int N=5e5; 
	int n,m;
	int a[N+5],f[N+5];
	int v_la[N+5],la[N+5];
	bool vis[N+5];
	signed main(){
		ios::sync_with_stdio(false);
		cin.tie(0);cout.tie(0);
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++){
			la[i]=v_la[a[i]];
			v_la[a[i]]=i;
		}
		for(int i=1;i<=m;i++) vis[v_la[i]]=1;
		for(int i=1;i<=n;i++){
			f[i]=f[la[i]]+1;
			if(vis[i-1]) f[i]+=f[i-1];
		}
		for(int i=1;i<=m;i++) cout<<f[v_la[i]]<<' ';
		return 0;
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	return zjp::main();
} 
