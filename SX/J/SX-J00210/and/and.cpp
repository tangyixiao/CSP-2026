#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n, m, maxx, ans;
long long a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
	}
	ans = a[1];
	for (int i = 2; i <= n; i ++ ) {
		ans = ans &a[i];
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	if (m == n) {
		cout << ans;
		return 0;
	}
	ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j)
				continue;
			ans = max(ans, a[i] & a[j]);
		}
	}
	cout << ans;
	return 0;
}