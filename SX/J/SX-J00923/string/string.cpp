#include <bits/stdc++.h>
using namespace std;
long long a[200005];
int n;
char c[200005];

long long f(int x, int y, long long b, int d, long long cnt) {
	if (x == y) {
		return cnt;
	}
	if (x >= n || y <= 1) {
		return cnt;
	}
	if (d = 0) {
		if (c[x] != c[y]) {
			if (a[x] > a[y]) {
				f(x, y - 1, a[x] - a[y], 1, cnt + a[y]);
			} else if (a[x] == a[y]) {
				f(x + 1, y - 1, 0, 0, cnt + a[x]);
			} else {
				f(x + 1, y, a[y] - a[x], -1, cnt + a[x]);
			}
		} else {
			if (a[x] > a[y]) {
				f(x, y - 1, a[x] - a[y], 1, cnt);
			} else if (a[x] == a[y]) {
				f(x + 1, y - 1, 0, 0, cnt);
			} else {
				f(x + 1, y, a[y] - a[x], -1, cnt);
			}
		}
	} else if (d = 1) {
		if (c[x] != c[y]) {
			if (b > a[y]) {
				f(x, y - 1, b - a[y], 1, cnt + a[y]);
			} else if (b == a[y]) {
				f(x + 1, y - 1, 0, 0, cnt + b);
			} else {
				f(x + 1, y, a[y] - b, -1, cnt + b);
			}
		} else {
			if (b > a[y]) {
				f(x, y - 1, b - a[y], 1, cnt);
			} else if (b == a[y]) {
				f(x + 1, y - 1, 0, 0, cnt);
			} else {
				f(x + 1, y, a[y] - b, -1, cnt);
			}
		}
	} else if (d = -1) {
		if (c[x] != c[y]) {
			if (a[x] > b) {
				f(x, y - 1, a[x] - b, 1, cnt + b);
			} else if (a[x] == b) {
				f(x + 1, y - 1, 0, 0, cnt + a[x]);
			} else {
				f(x + 1, y, b - a[x], -1, cnt + a[x]);
			}
		} else {
			if (a[x] > b) {
				f(x, y - 1, a[x] - b, 1, cnt);
			} else if (a[x] == b) {
				f(x + 1, y - 1, 0, 0, cnt);
			} else {
				f(x + 1, y, b - a[x], -1, cnt);
			}
		}
	}
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	cout << f(1, n, 0, 0, 0);
	return 0;
}
