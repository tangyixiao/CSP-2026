#include <bits/stdc++.h>
using namespace std;
int m, n, a[200005], maxx, ans;

int main() {
	freopen("and2.in", "r", stdin);
	freopen("and2.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	ans = a[1];
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (a[i] > maxx)
				maxx = a[i];
		}
		cout << maxx;
		return 0;
	}
	if (m == n) {
		for (int i = 2; i <= n; i++) {
			ans = (ans &a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		int ma = 0;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if ((a[i]&a[j]) > ma)
					ma = a[i] & a[j];
			}
		}
		cout << ma;
	}
	return 0;
}