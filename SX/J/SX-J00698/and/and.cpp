#include <bits/stdc++.h>
#define int long long
using namespace std;
int pw[35], n, m, a[200005], ans;
bool b[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	pw[0] = 1;
	for (int i = 1; i <= 31; i++)
		pw[i] = pw[i - 1] * 2;
	for (int i = 31; i >= 0; i--) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (b[j] == 0) {
				if ((a[j]&pw[i]) != 0)
					cnt++;
			}
		}
		if (cnt >= m) {
			for (int j = 1; j <= n; j++) {
				if (b[j] == 0) {
					if ((a[j]&pw[i]) == 0)
						b[j] = 1;
				}
			}
			ans += pw[i];
		}
	}
	cout << ans;
	return (0 - 0);
}
/*
4 2
3 15 12 12
*/
