#include <bits/stdc++.h>
using namespace std;
long long a[500005];
long long b[500005];
long long c[300005];

int main() {
	freopen("card2.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	for (long long i = 1; i <= n; i++) {
		long long d = i;
		while (d > 0) {
			for (long long j = i; j <= n; j++) {
				long long h = b[j];
				c[h]++;
			}
			d--;
		}
		for (long long j = 1; j <= n; j++)
			b[j] = a[j];
	}
	for (long long i = 1; i <= m; i++) {
		cout << c[i] / 2 << ' ';
	}
	return 0;
}
