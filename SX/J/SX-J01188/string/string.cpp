#include <bits/stdc++.h>
using namespace std;
long long n, a[200000], ans, mx;
char c[200000];
int x = 0, y;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	y = n - 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 0; i < n / 2; i++) {
		if (c[x] == c[y]) {
			if (a[x] > a[y]) {
				a[x] -= a[y];
				y--;
			} else if (a[x] < a[y]) {
				a[y] -= a[x];
				x++;
			} else
				x++, y--;
		} else {
			if (a[x] > a[y]) {
				a[x] -= a[y];
				ans += a[y];
				y--;
			} else if (a[x] < a[y]) {
				a[y] -= a[x];
				ans += a[x];
				x++;
			} else {
				ans += a[x];
				x++;
				y--;
			}
		}
	}
	cout << ans;
	return 0;
}
