#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, k = 0, g = 0, u, lo;
	vector<long long> v;
	cin >> n >> m;
	for (long long q = 1; q <= n; ++q) {
		int c;
		cin >> c;
		v.push_back(c);
	}
	if (1 == m) {
		for (long long q = 0; q < n; ++q) {
			k = max(k, v.at(q));
		}
	} else if (m == 2) {
		for (long long q = 0; q <= n - m + 1; ++q) {
			g = v.at(q);
			for (long long p = q + 1; p < n; ++p) {
				u = g;
				u &= v.at(p);
				k = max(k, u);
			}

		}
	} else {
		for (long long q = 0; q < n; ++q) {
			g = v.at(q);
			for (long long x = q + 1; x < n; ++x) {
				lo = g;
				lo &= v.at(x);
				for (long long p = x + 1; p < n; ++p) {
					u = lo;
					u &= v.at(p);
					k = max(k, u);
				}
			}
		}
	}
	cout << k;
	return 0;
}