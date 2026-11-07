#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, m, ans;
int a[200005];
bool cmp (int x, int y) {
	return x > y;
}
signed main() {
	ios::sync_with_stdio (0), cin.tie (0), cout.tie (0);
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n * m <= 6e8 or m != n - 1) {
		stable_sort (a + 1, a + 1 + n, cmp);
		for (int i = 1; i <= n; i++) {
			int sum = a[i];
			if (sum <= ans) {
				break;
			}
			for (int j = i + 1; j <= i + m - 1; j++) {
				sum &= a[j];
			}
			ans = max (ans, sum);
		}
	}
	else if (m == n - 1) {
		stable_sort (a + 1, a + 1 + n, cmp);
		ans = a[1];
		for (int i = 2; i <= m; i++) {
			ans &= a[i];
		}
	}
	else {
		ans = a[n / 2];
	}
	cout << ans;
	return 0;
}