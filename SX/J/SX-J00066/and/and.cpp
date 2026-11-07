#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+10, B = 35;
int a[N][B], b[N][B];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m, ans = 0, mx = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i][0];
		int w = 0, ni = a[i][0];
		while (ni) {
			w++;
			b[i][w] = (ni & 1);
			ni >>= 1;
		}
		mx = max(mx, w);
	}
	for (int k = 0, j = mx; j >= 1; j--) {
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i][k])
				cnt += b[i][j];
		}
		if (cnt >= m) {
			ans += (1 << (j - 1));
			for (int i = 1; i <= n; i++) {
				if (a[i][k] && b[i][j])
					a[i][k + 1] = a[i][k];
			}
			k++;
		}
	}
	cout << ans;
	return 0;
}