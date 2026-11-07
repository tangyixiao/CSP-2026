#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500010], b[500010], c[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (long long i = 1; i <= n; i++) {
		long long num = 0;
		for (long long j = i; j <= n; j++) {
			num++;
			b[num] = a[j];
		}
		num = n - i + 1;
		for (long long j = i; j <= n; j++) {
			bool f = 0;
			for (long long l = 1; l <= num; l++) {
				if (b[l] == a[j]) {
					f = 1;
					num = l;
					break;
				}
			}
			if (!f) {
				num++;
				b[num] = a[j];
			}
		}
		for (long long j = 1; j <= num; j++)
			c[b[j]]++;
	}
	for (long long i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
