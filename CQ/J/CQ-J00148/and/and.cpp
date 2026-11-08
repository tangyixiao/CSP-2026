#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],ans;
int vis[N];
void dfs(int u,int res,int l){
	if(l==m){
		ans=max(ans,res);
		return ;
	}
	for(int i=u+1;i<=n;i++) dfs(i,res&a[i],l+1);
}
void solve(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=2000){//Ç°50·Ö
		if(m==n){
			ans=a[1];
			for(int i=2;i<=n;i++) ans=ans&a[i];
		}
		else for(int i=1;i<=n-m+1;i++) dfs(i,a[i],1);
	}
	else{
		sort(a+1,a+n+1);
		ans=a[n-m+1];
	} 
	cout<<ans;
}
signed main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int T=1;
//	cin>>T;
	while(T--) solve();

	return 0;
}

