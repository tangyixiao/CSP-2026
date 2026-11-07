#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("travel1.in", "r", stdin);
//	freopen("travel1.out", "w", stdout);
	int n, m, a[200000], b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	b = a[n];
	for (int i = n - 1; i > n - m; i--) {
		b = b &a[i];
	}
	cout << b;
	return 0;
}
