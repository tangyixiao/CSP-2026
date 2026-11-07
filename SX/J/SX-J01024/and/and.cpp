#include <bits/stdc++.h>
using namespace std;
long long a[300005], sum[300005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, maxn = -1e9, s = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			maxn = max(maxn, a[i]);
		}
		cout << maxn;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				s = a[i] & a[j];
				maxn = max(maxn, s);
			}
		}
		cout << maxn;
		return 0;
	}
	if (m == n) {
		s = a[1];
		for (int i = 1; i <= n; i++) {
			s = s &a[i];
		}
		cout << s;
		return 0;
	}
	if (m == n - 1) {
		s = a[1];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j != i) {
					s = s &a[j];
				}
			}
			maxn = max(maxn, s);
		}
		cout << maxn;
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int q = j + 1; q <= n; q++) {
					s = a[i] & a[j] & a[q];
					maxn = max(maxn, s);
				}
			}
		}
		cout << maxn;
	}
	return 0;
}
