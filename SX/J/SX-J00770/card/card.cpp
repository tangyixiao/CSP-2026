#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005];
int ans[300005], x;
bool used[500005], y[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			x = 0;
			for (int k = j + 1; k <= n; k++)
				if (a[j] == a[k]) {
					x = k;
					break;
				}
			while (j < x) {
				used[j] = 1;
				j++;
			}
		}
		for (int k = i; k <= n; k++) {
			if (used[k])
				used[k] = 0;
			else
				y[a[k]] = 1;
		}
		for (int k = 1; k <= m; k++)
			if (y[k])
				ans[k]++;
		for (int k = 1; k <= m; k++)
			y[k] = 0;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
