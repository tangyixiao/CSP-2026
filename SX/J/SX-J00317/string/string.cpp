#include <bits/stdc++.h>
using namespace std;
long long n, a[200005], ans;
char b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	long long x = 1, y = n;
	while (x < y) {
		if (b[x] == b[y]) {
			if (a[x] > a[y]) {
				a[x] = a[x] - a[y];
				y--;
			} else if (a[x] < a[y]) {
				a[y] = a[y] - a[x];
				x++;
			} else {
				x++;
				y--;
			}
		} else {
			if (a[x] > a[y]) {
				a[x] = a[x] - a[y];
				ans += a[y];
				y--;
			} else if (a[x] < a[y]) {
				a[y] = a[y] - a[x];
				ans += a[x];
				x++;
			} else {
				x++;
				y--;
				ans += a[y];
			}
		}
	}
	cout << ans;
	return 0;
}