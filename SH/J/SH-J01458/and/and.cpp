#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,a[200005];
ll dp[2005][2005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for (int i=1;i<=n;++i) {
		cin>>a[i];
		dp[i][1]=a[i];
	}
	if (n==m) {
		ll ans=a[1];
		for (int i=2;i<=n;++i) ans&=a[i];
		cout<<ans<<endl;
		return 0;
	}
	for (int i=2;i<=n;++i) {
		for (int j=1;j<=min(ll(i),m);++j) {
			for (int t=i-1;t>=j-1;--t)
				dp[i][j]=max(dp[i][j],dp[t][j-1]&a[i]);
		}
	}
	ll ans=-1;
	for (int i=m;i<=n;++i) ans=max(ans,dp[i][m]);
	cout<<ans<<endl;
	return 0;
}

