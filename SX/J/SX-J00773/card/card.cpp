#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], g[500005], t[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	if (m <= 2) {
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		if (a[n] == 1) {
			g[1] = n;
			for (int j = 1; j <= n; j++) {
				if (a[j] == 2) {
					g[2]++;
				}
			}
			cout << g[1] << " " << g[2];
		}
		if (a[n] == 2) {
			g[2] = n;
			for (int j = 1; j <= n; j++) {
				if (a[j] == 1) {
					g[1]++;
				}
			}
			cout << g[1] << " " << g[2];
		}
		return 0;
	}
	if (n > 500) {
		for (int i = 1; i <= n; i++)  {
			cin >> a[i];
			if (t[a[i]] == 0) {
				t[a[i]] = i;
			}
		}
		for (int i = 1; i <= m; i++) {
			cout << n - t[i] + 1 << " ";
		}
		return 0;
	}
	return 0;
}