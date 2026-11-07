#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
int a[N], b[59];
vector<int>v[59];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, ma = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int x = a[i], k = 1;
		while (x > 0) {
			if (x % 2 == 1) {
				b[k]++;
				v[k].push_back(a[i]);
			}
			k++;
			x /= 2;
		}
		ma = max(ma, k);
	}
	int ans = 0;
	for (int i = ma; i >= 1; i--) {
		//cout << b[i] << ' ';
		if (b[i] >= m) {

			for (int j = 1; j < i; j++) {
				v[j].clear();
				b[j] = 0;
			}
			for (auto x : v[i]) {
				//cout << x << ' ';
				int y = x, k = 1;
				while (y > 0) {
					if (y % 2 == 1) {
						b[k]++;
						v[k].push_back(x);
					}
					k++;
					y /= 2;
					if (k >= i)
						break;
				}
			}
			ans += (1 << (i - 1));
		}
	}
	cout << ans;
	return 0;
}