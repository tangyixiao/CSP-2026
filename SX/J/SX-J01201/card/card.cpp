#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int n, m;
int a[N];
int q[N];
int tt = 0;
int ans[N];
bool f[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		tt = 0;
		memset(f, 0, sizeof f);
		for (int j = i; j <= n; j++) {
			if (f[a[j]] == 0) {
				tt++;
				q[tt] = a[j];
				f[a[j]] = 1;
			} else {
				while (q[tt] != a[j]) {
					f[q[tt]] = 0;
					tt--;
				}

			}
		}
		for (int j = 1; j <= tt; j++) {
			for (int p = 1; p <= m; p++) {
				if (q[j] == p) {
					ans[p]++;
					break;
				}
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}