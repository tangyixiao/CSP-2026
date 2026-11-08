#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2 * 1e5+10;
ll a[N];
ll t[N];
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ll n, m;
	cin >> n >> m;
	ll cnt = 0;
	for(ll i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, greater<int>());
	ll ans = 0;
	for(ll i = 1; i <= m; i++){
		if(i & 1){
			ans = max(ans, i);
		}
	}
	cout << ans * 2 + 1;
	return 0;
}
