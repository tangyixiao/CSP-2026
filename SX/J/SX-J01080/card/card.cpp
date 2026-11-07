#include <bits/stdc++.h>
using namespace std;
int n, m, a[500100], b[300010], ans[300010], d;
bool f[300010], ff;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1])
			ff = 1;
	}
	for (int i = n; i >= 1; i--) {
		if (f[a[i]] == 0) {
			f[a[i]] = 1;
			b[a[i]] = i;
		}
	}
	if (n <= 5000) {
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				ans[a[j]]++;
				if (b[a[j]] > j)
					j = b[a[j]];
			}
		}
	} else if (n > 5000) {
		if (m <= 2) {
			for (int i = 1; i <= n; i++) {
				if (a[i] == a[n]) {
					d = i - 1;
					break;
				}
			}
			if (a[n] == 1) {
				ans[1] = n - d;
				ans[2] = d;
			} else {
				ans[2] = n - d;
				ans[1] = d;
			}
		} else if (ff == 1) {
			for (int i = 1; i <= n; i++) {
				for (int j = i; j <= n; j++) {
					ans[a[j]]++;
					if (b[a[j]] > j)
						j = b[a[j]];
				}
			}
		} else {
			ans[a[1]] = 1;
			for (int i = 2; i <= n; i++) {
				if (a[i] != a[i - 1]) {
					ans[a[i]] = ans[a[i - 1]] + 1;
				} else
					ans[a[i]]++;
			}
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}