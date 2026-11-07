#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+10;
ll ans=LLONG_MIN;
ll n,m;
ll a[N],b[N];
void dfs(ll s,ll dep) {
	if(dep>m) {
		ll t=b[1];
		for(int i=2; i<=m; i++) {
			t=(t&b[i]);
		}
		ans=max(ans,t);
		return;
	}
	for(int i=s; i<=n; i++) {
		b[dep]=a[i];
		dfs(i+1,dep+1);
	}
}
int main() {
	cin.tie(0) -> ios_base::sync_with_stdio(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1; i<=n; i++) {
		cin>>a[i];
	}
	dfs(1,1);
	cout<<ans;
	return 0;
}