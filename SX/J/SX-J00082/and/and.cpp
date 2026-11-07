#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[n + 5], ans = 0, b;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		sort(a, a + n);
		cout << a[n - 1];
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			b = a[i] & a[j];
		if (b > ans)
			ans = b;
	}
	cout << ans;
}
