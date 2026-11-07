#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
int a[N], b[N], c[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, last, first;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		long long x = 0;
		first = i;
		last = n;
		for (int j = 1; j <= n; j++) {
			c[j] = a[j];
		}
		for (int j = 1; j <= n; j++) {
			bool f = 0;
			for (int k = first; k <= last; k++) {
				if (a[j] == c[k]) {
					f = 1;
					last = k;
					break;
				}
			}
			if (f == 0) {
				last++;
				c[last] = a[j];
			}
		}
		for (int j = first; j <= last; j++) {
			b[c[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
