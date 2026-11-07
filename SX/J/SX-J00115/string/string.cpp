#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 100001 + 10;
ll n, ans = 0, k = 0, y = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<ll> a(MAXN);
	string c, s;
	cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		k += a[i];
	}
	for (ll i = 0; i < k; i++) {
		ll p = a[i];
		for (ll j = 0; j < p; j++) {
			s[j] = c[i];
			//cout << s[j];
		}
	}
	for (ll i = 0; i < k / 2; i++) {
		if (s[i] != s[k - 1 - i]) {
			y++;
		}
	}
	cout << y;
	return 0;
}
