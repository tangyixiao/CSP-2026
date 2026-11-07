#include <bits/stdc++.h>
using namespace std;
long long n, m, b;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int a[n + 1];
	for (long long i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (long long i = n - 1; i >= (n  - m); i--) {
		b = a[i];
	}
	cout << b;
	return 0;
}