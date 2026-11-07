#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int a[10000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	ans = a[n];
	for (int i = n - 1; i >= n + 1 - m; i--) {
		ans = ans &a[i];
	}
	cout << ans;
	return 0;
}
