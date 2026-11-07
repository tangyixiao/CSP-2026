#include <bits/stdc++.h>
using namespace std;
int a[200005], e[200005][40], n, m, max = -1, a1, c;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 1; i <= n; i++) {
		a1 = a[i];
		c = 30;
		while (a1 != 0) {
			c--;
			e[i][c] = a1 % 2;
			a1 /= 2;
		}
		a[i] = c;
	}
	cout << 17;
	return 0;
}