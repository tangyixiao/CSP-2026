#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], maxx, ans1, ans2, c, b;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	cin >> a[1];
	maxx = a[1];
	ans2 = a[1];
	for (int i = 2; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
		ans2 = ans2 &a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (ans1 < (a[i] & a[j])) {
				ans1 = a[i] & a[j];
				c = a[i];
				b = a[j];
			}
		}
	}
	if (m == n) {
		cout << ans2;
		return 0;
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	if (m == 2) {
		cout << ans1;
		return 0;
	}
	return 0;
}