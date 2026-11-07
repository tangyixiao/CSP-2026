#include <bits/stdc++.h>
using namespace std;
unsigned long long n, m, a[500005], mmax;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];

	}
	if (m == 1) {
		sort(a + 1, a + 1 + n);
		cout << a[n];
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n and j != i; j++) {
			mmax = max(a[i] & a[j], mmax);
		}
	}
	cout << mmax;
	return 0;
}