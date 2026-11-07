#include <bits/stdc++.h>
using namespace std;
long long n, m, a[10000005], m1, t;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	if (m == 1) {
		cout << a[n];
	}
	cout << a[n - 2];
	return 0;
}
