#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
constexpr ll N = 2e5 + 5;
ll n;
ll a[N];
char c[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	ll ans = 0;
	for (ll i = 1; i <= n; i++) cin >> a[i] >> c[i];
	for (ll l = 1, r = n; l <= r; ) {
		if (l == r) {
			break;	
		} else if (a[l] < a[r]) {
			if (c[l] != c[r]) ans += a[l];
			a[r] -= a[l], l++;
		} else if (a[l] == a[r]) {
			if (c[l] != c[r]) ans += a[l];
			l++, r--;
		} else if (a[l] > a[r]) {
			if (c[l] != c[r]) ans += a[r];
			a[l] -= a[r], r--;
		}
	}
	cout << ans;
	return 0;
}

