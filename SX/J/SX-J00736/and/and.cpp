#include <bits/stdc++.h>
using namespace std;
bool a[200005][35];
bool f[200005];
int c[200005], gs[35];
int ma = -1, n, m, bw, ans = -1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	bw = n;
	for (int i = 1; i <= n; i++)
		cin >> c[i];
	sort(c + 1, c + 1 + n);
	for (int i = 1; i <= n; i++) {
		int k = c[i];
		for (int j = 31; j >= 0; j--) {
			if (k == 0)
				break;
			if (k >= pow(2, j)) {
				a[i][j] = 1;
				gs[j]++;
				k -= pow(2, j);
				ma = max(ma, j);
			}
		}
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, c[i]);
		}
		cout << ans;
		return 0;
	}
	if (n == m) {
		int k = c[1];
		for (int i = 2; i <= n; i++) {
			k &= c[i];
		}
		cout << k;
		return 0;
	} else {
		for (int i = ma; i >= 0; i--) {
			if (bw == m)
				break;
			if (gs[i] < m)
				continue;
			for (int j = 1; j <= n; j++) {
				if (f[j])
					continue;
				if (a[j][i] == 0)
					f[j] = 1, bw--;
				if (bw == m)
					break;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (ans == -1 && !f[i]) {
			ans = c[i];
			continue;
		}
		if (!f[i])
			ans &= c[i];
	}
	cout << max(ans, 0);
	return 0;
}
