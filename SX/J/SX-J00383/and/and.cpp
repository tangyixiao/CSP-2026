#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m, mmax = -1, ans, c[N], t[N], cnt;

struct node {
	int x, y, mi;
} a[N];

int llog(int f, int ff) {
	if (f < a[f].mi) {
		a[f].mi = f;
	}
	while (f > 0) {
		cnt++;
		f /= 2;
	}
	cnt = 0;
	return cnt;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x;
		a[i].mi = 1e9;
	}
	if (m == n) {
		for (int i = 1; i < n; i++) {
			ans = a[i].x &a[i + 1].x;
			a[i + 1].x = a[i].x &a[i + 1].x;
		}
		cout << ans;
		return 0;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (a[i].x >= mmax) {
				mmax = a[i].x;
			}
		}
		cout << mmax;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		c[i] = llog(a[i].x, a[i].x);
		int p = pow(2, c[i]) - a[i].x;
		t[p]++;//计算对数差值，相等优先调用
	}
	cout << a[n].x;
	for (int i = 32; i >= 1; i--) {
		if (t[i] >= m) {
			return 0;
		} else {
			m -= t[i];
		}
	}
	return 0;
}