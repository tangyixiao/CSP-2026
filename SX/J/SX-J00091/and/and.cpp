#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, sum = 0, len = 0;
	cin >> n >> m;
	long long a[m + 1];
	memset(a, 0, sizeof(a));
	for (long long i = 1; i <= n; i++) {
		long long x;
		cin >> x;
		len++;
		a[len] = x;
		if (len == m) {
			long long y = a[1];
			len = 0;
			for (long long j = 2; j <= m; j++) {
				if (a[j] < y) {
					y = a[j];
					len = j - 1;
				}
			}
		}
	}
	sort(a + 1, a + m + 1);
	sum = a[m];
	for (long long i = m - 1; i >= 1; i--) {
		sum = sum &a[i];
	}
	cout << sum;
	return 0;
}
