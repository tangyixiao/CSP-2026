#include <bits/stdc++.h>
using namespace std;
#define int long long
bool lxk;
int n, a[1000000], sum, x, ans = 0, q, m, dd[10005][10005], b[1000000], xiabiao, cnt;

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int gg = i; gg <= n; gg++) {
			for (int j = 1; j <= gg; j++) {
				if (b[j] == a[gg]) {
					lxk = 1;
					xiabiao = j;
					break;
				}
			}
			if (lxk == 1) {
				for (int hhhj = xiabiao; hhhj <= gg; hhhj++) {
					b[hhhj] = 0;
				}
				b[gg] = a[gg];
				lxk = 0;
			} else {
				b[gg] = a[gg];
			}
		}
		for (int j = 1; j <= n; j++) {
			if (b[i] != 0LL) {
				dd[i][b[i]] += 1LL;
				b[j] = 0LL;
			}
		}
	}
	for (int j = 1; j <= m; j++) {
		for (int i = 1; i <= n; i++) {
			cnt += dd[i][j];
		}
		cout << cnt << " ";
	}

	return 0;
}
