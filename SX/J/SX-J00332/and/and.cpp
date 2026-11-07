#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int mx = 0;
		for (int i = 1; i <= n; i++) {
			mx = max(mx, a[i]);
		}
		cout << mx;
		return 0;
	} else if (m == 2) {
		int mx = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				mx = max(mx, (a[j] & a[i]));
			}
		}
		cout << mx;
		return 0;
	} else if (n == m) {
		int x = a[1];
		for (int i = 2; i <= n; i++) {
			x = (x &a[i]);
		}
		cout << x;
		return 0;
	} else if (m == n - 1) {
		int mx = 0, x = a[1];
		for (int i = 2; i <= n - 1; i++)
			x = (x & a[i]);
		int y = a[2];
		for (int i = 3; i <= n; i++)
			y = (y & a[i]);
		cout << max(x, y);
	}
	int mx = 0;
	for (int i = 1; i <= n - m; i++) {
		int x = a[i];
		for (int j = i + 1; j <= i + m - 1; j++) {
			x = (x &a[j]);
		}
		mx = max(mx, x);
	}
	cout << mx;
}
