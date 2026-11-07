#include <bits/stdc++.h>
using namespace std;
long long n, m, s, maxx = LLONG_MIN, k1, maxv = LLONG_MIN, ma = LLONG_MIN;
long long a[200010];

void dfs(int k, long long r, int w) {

	if (k == m + 1) {
		ma = max(ma, 1ll * r);
		return;
	}
	for (int i = w + 1; i <= n; i++) {
		dfs(k + 1, r &a[i], i);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (maxx < a[i]) {
			maxx = a[i];
			k1 = i;
		}

		s = s &a[i];
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	if (m == n) {
		cout << s;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			if (i != k1) {
				maxv = max(maxv, maxx &a[i]);
			}
		}
		cout << maxv;
		return 0;
	}
	if (m == n - 1) {
		cout << s;
		return 0;
	}
	dfs(1, LLONG_MAX, 0);
	cout << ma;


	return 0;
}
