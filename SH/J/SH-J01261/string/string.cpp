#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 2e5+5;
ll a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ll n;
	cin >> n;
	ll cntk = 1;
	for(ll i = 1; i <= n; i++) {
		ll k;
		char c;
		cin >> k >> c;
		ll s = c;
		for(ll j = cntk; j <= k+cntk; j++) {
			a[j] = s;
		}
		cntk += k;
	}

	ll cnt = 0;
	for(ll i = 1; i <= cntk-i+1; i++) {
		if(a[i] != a[cntk-i+1]) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}

