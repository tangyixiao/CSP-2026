#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	int n, m;
	int a[200005];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int sum = a[n];
	for (int i = n ; i >= m; i--) {
		if (i == n) {
			sum = a[i];
			continue;
		}
		sum &= a[i];
	}
	cout << sum;
	return 0;
}
