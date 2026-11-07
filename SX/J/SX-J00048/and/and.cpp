#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	long long a[n], b, ma = 0, mx = 0, j;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[j] > ma)
				ma = a[j], mx = j;
		}
		if (i == 0)
			b = ma;
		b &= ma;
		ma = 0;
		a[mx] = 0;
		mx = 0;
	}
	cout << b;
	return 0;
}
