#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m, a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int maxx = 0;
		for (int i = 1; i <= n; i++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
		return 0;
	}
	if (m == 2) {
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n && i != j; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	return 0;
}
