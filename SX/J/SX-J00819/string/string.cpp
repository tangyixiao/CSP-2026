#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], u, num = 0, x = 0, y = 0, j = 0;
char c[200005], v;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> u >> v;
		if (i != 1 && c[y] == v) {
			a[y] += u;
		} else {
			y++;
			c[y] = v;
			a[y] = u;
		}
	}
	j = y;
	for (int i = 1; i <= y; i++) {
		if (i >= j) {
			break;
		}
		if ((a[i] == a[j] || x == 1) && c[i] == c[j]) {
			continue;
		} else if (a[i] != a[j] && c[i] == c[j] ) {
			if (y == 2) {
				cout << 0;
				return 0;
			} else {
				if (abs(a[i] - a[j]) == abs(a[i + 1] - a[j - 1])) {
					x = 1;
				}
				if (a[i] > a[j]) {
					a[j - 1] -= abs(a[i] - a[j]);
				} else if (a[i] < a[j]) {
					a[i + 1] -= abs(a[i] - a[j]);
				}
				num += abs(a[i] - a[j]);
			}


		} else if (a[i] == a[j] && c[i] != c[j] ) {
			num += a[i];
		} else if (a[i] != a[j] && c[i] != c[j] ) {
			if (y == 2) {
				cout << min(a[i], a[j]);
				return 0;
			} else {
				if (a[i] > a[j]) {
					a[j - 1] -= abs(a[i] - a[j]);
				} else if (a[i] < a[j]) {
					a[i + 1] -= abs(a[i] - a[j]);
				}
				num += max(a[i], a[j]);
			}

		}
		j--;
	}
	cout << num;
	return 0;
}