#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[505], ans[305];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int b[50005] = {};
		for (int j = i; j <= n; j++) {
			if (b[a[j]] >= 1) {
				for (int l = j - 1; l >= i; l--) {
					if (a[l] != a[j]) {
						b[a[l]]--;
					}
					if (a[l] == a[j]) {
						b[a[j]]--;
						break;
					}
				}
			}
			b[a[j]] = 1;
		}
		for (int j = 1; j <= m; j++) {
			if (b[j] >= 1) {
				ans[j]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}