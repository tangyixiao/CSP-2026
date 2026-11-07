#include <bits/stdc++.h>
using namespace std;

struct point {
	long long w;
	char j;
};
string s;
vector<point> v;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a, k = 0;
	char c;
	cin >> n;
	unsigned long long se;
	if (n == 1) {
		cin >> a >> c;
		cout << 0;
		return 0;
	}
	for (long long q = 1; q <= n; ++q) {
		cin >> a >> c;
		se += a;
		v.push_back({a, c});
	}
	if (se % 2 != 0) {
		--v.at(ceil(n * 1.0 / 2)).w;
	}

	for (long long q = 0, p = n - 1; q < p;) {
		long long m = v.at(q).w;
		long long n = v.at(p).w;
		char x = v.at(q).j;
		char y = v.at(p).j;
		if (x != y) {
			k += min(m, n);
			if (m > n) {
				--p;
			} else if (n > m) {
				++q;
			} else {
				++q;
				--p;
			}
		} else {
			++q;
			--p;
		}
	}
	cout << k;
	return 0;
}
