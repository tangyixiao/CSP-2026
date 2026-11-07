#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n, a[N], m, ans;
//map<string, int> m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	if (n == m) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
	}
	if (m == 1) {
		for (int i = 2; i <= n; i++) {
			ans = max(ans, a[i]);
		}
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
	}
	cout << ans;
	return 0;
}
