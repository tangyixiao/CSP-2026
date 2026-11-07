#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n, m, a[N], mx = -1, mn = LONG_LONG_MAX, c;

inline long long AND(long long x, long long y) {
	long long ans = 0, w = 1, _ = x, __ = y;
	while (_ && __) {
		int _q = _ % 2, __q = __ % 2;
		if (_q == __q) {
			ans += w;
		}
		w *= 2;
		_ /= 2;
		__ /= 2;
	}
	return ans;
}

inline bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > mx) {
			mx = a[i];
			c = 1;
		} else if (a[i] == mx) {
			c++;
		}
		mn = min(mn, a[i]);
	}
	if (m == 1) {
		cout << mx;
		return 0;
	} else if (m == n) {
		long long p = AND(a[1], a[2]);
		for (int i = 3; i <= n; i++) {
			p = AND(p, a[i]);
		}
		cout << p;
		return 0;
	} else if (c == m) {
		cout << mx;
		return 0;
	} else {
		stable_sort(a + 1, a + n + 1, cmp);
		long long p = AND(a[1], a[2]);
		for (int i = 3; i <= m; i++) {
			p = AND(p, a[i]);
		}
		cout << p;
		return 0;
	}
	return 0;
}
