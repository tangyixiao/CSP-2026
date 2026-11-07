#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	if (m == n) {
		ans = a[1];
		for (int i = 1; i <= n; i++)
			ans = (ans & a[i]);
		cout << ans;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans;
	}
	if (m == n - 1) {
		ll ans1 = a[2];
		ans = a[1];
		for (int i = 1; i < n; i++)
			ans = (ans & a[i]);
		for (int i = 2; i <= n; i++)
			ans1 = (ans1 & a[i]);
		cout << max(ans, ans1);
	}
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
