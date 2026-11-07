#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[400005];
long long sum;

int main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	stable_sort(a + 1, a + n + 1);
	if (m == 1) {
		sum = a[n];
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != j) {
					sum = max(sum, a[i] & a[j]);
				}

			}
		}
	} else if (m == n) {
		sum = a[1];
		for (int i = 2; i <= n; i++) {
			sum &= a[i];
		}
	} else {
		bool f = 0;
		sum = a[3];
		m--;
		for (int i = 3; i < n;) {
			if (f == 0) {
				i++;
				f = 1;
			} else {
				i += 3;
				f = 0;
			}
			sum &= a[i];
			m--;
		}
		if (m == 2)
			sum &= a[2] & a[n];
		else if (m == 1)
			sum = sum & a[2];
	}
	cout << sum;

	return 0;
}
