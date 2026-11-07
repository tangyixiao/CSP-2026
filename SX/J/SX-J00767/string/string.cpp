#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl '\n'
#define st string
using namespace std;
ll n;
ll a[200010];
char c[20010];
st s = "";

int main() {
	fast;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (ll j = 1; j <= a[i]; j++) {
			s += c[i];
		}
	}
	ll ss = s.size();
	ll ans = 0;
	if (ss % 2 == 1) {
		ll s1 = (ss - 1) / 2;
		for (ll i = 0; i < s1; i++) {
			if (s[i] != s[ss - 1 - i]) {
				ans++;
			}
		}
	} else {
		ll s1 = ss / 2;
		for (ll i = 0; i < s1; i++) {
			if (s[i] != s[ss - 1 - i]) {
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}