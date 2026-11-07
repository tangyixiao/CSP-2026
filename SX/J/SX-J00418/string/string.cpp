#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+100;

struct node {
	ll gs;
	char zm;
} a[N];
string s, c1, c2;
ll ans, n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n <= 10) {
		for (ll i = 1; i <= n; i++) {
			ll x;
			char y;
			cin >> x >> y;
			while (x--) {
				s += y;
			}
		}
		ll len = s.size();
		for (ll i = 0; i <= (len - 1) / 2; i++) {
			if (s[i] != s[s.size() - 1 - i])
				ans++;
		}
		cout << ans;
		return 0;
	}
	for (ll i = 1; i <= n; i++) {
		cin >> a[i].gs >> a[i].zm;
	}
	for (ll i = 1; i <= n / 2; i++) {
		if (a[i].zm != a[n - i + 1].zm)
			ans += a[i].gs;
	}
	cout << ans;
	return 0;
}
