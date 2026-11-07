#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
ll tong[5005][3005], a[5005], ans[3005], n, m;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= m; j++) {
			tong[i][j] = tong[i + 1][j];
		}
		tong[i][a[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (tong[j][i] != 0)
				ans[i]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		if (i % 2 == 1)
			cout << ans[i] << " ";
		else
			cout << ans[i] - 1 << " ";
	}

	return 0;
}
