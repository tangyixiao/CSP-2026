#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
int n,m; 
int a[N],ans[N],l[N],r[N],c[N],d[N];
int vis[N],last[N],maxn;
signed main( ){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=0;i<=m;i++) l[i]=n+1,r[i]=n+1;
	ans[a[n]]=n; l[a[n]]=1; r[a[n]]=n;
	for(int i=1;i<=n;i++){
		last[i]=vis[a[i]];
		vis[a[i]]=i;
	}
	for(int i=n-1;i>=1;i--){
		c[a[i+1]]=last[i+1];
		d[last[i+1]]=1;
		 if(d[i]==1) c[a[i]]=last[i];
		maxn=0;
		for(int j=1;j<=m;j++) if(j!=a[i]) maxn=max(maxn,c[j]);
		int pos=maxn+1;
		if(i<pos) cout<<"!";
		if(i<l[a[i]]){
			ans[a[i]]+=(i-pos+1);
			l[a[i]]=pos; r[a[i]]=i;
		}
		else if(pos<l[a[i]]){
			ans[a[i]]+=(l[a[i]]-pos);
			l[a[i]]=pos;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
