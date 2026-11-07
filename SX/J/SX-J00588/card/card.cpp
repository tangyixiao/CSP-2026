#include <bits/stdc++.h>
using namespace std;

const int N = 5e5+10, M = 3e5+10;
int m, n, a[N], ans[M], s[M];
int x = 1, y;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s[a[i]]++;
	}
	while (x <= n) {
		y = x;
		while (y <= n) {
			ans[a[y]]++;
			if (s[a[y]] != 1) {
				for (int i = n;; i--) {
					if (a[i] == a[y]) {
						y = i + 1;
						break;
					}
				}
			} else {
				y++;
			}
		}
		x++;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}