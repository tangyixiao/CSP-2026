#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
using ll=long long;
ll a[N];
int vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	for (int i=1;i<=n;++i)cin>>a[i];
	for (int i=1;i<=n;++i)vis[i]=1;
	ll ans=0;
	for (ll j=31;j>=0;--j){
		int cnt=0;
		for (int i=1;i<=n;++i){
			if (((1ll<<j)&a[i])&&vis[i])cnt++;
		}
		if (cnt<m)continue;
		for (int i=1;i<=n;++i){
			if (((1ll<<j)&a[i])==0)vis[i]=0;
		}
		ans+=(1ll<<j); 
	}
	cout<<ans;
	return 0;
} 
