#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int maxx = INT_MIN, ans;
	for (int i = 1; i <= n; i++) {
		ans = a[i];
		for (int j = i + 1; j <= m; j++) {
			ans = ans &a[j];
		}
		if (ans > maxx) {
			maxx = ans;
		}
	}
	cout << ans;
	return 0;
}
