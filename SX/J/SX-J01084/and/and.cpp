#include <bits/stdc++.h>
using namespace std;
long long a[201000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m, b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	if (m == 1) {
		cout << a[n];
		return 0;
	} else {
		b = a[n] & a[n - 1];
		m -= 2;
		if (m != 0) {
			for (int i = n - 2; i >= 1; i--) {
				b = b &a[i];
				m--;
				if (m == 0)
					break;
			}
		}

	}
	cout << b;
	return 0;
}
