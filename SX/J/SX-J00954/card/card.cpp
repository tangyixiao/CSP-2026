#include <bits/stdc++.h>
using namespace std;
int a[100010], b[100010], v[100010], ans[100010];

int main() {
	long long n, m, tot;
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int k = 1; k <= n; k++) {
		memset(v, 0, sizeof(v));
		tot = 0;
		for (int i = k; i <= n; i++) {
			if (!v[a[i]]) {
				b[++tot] = a[i];
				v[a[i]] = tot;
			} else {
				for (int j = v[a[i]] + 1; j <= tot; j++) {
					v[b[j]] = 0;
				}
				tot = v[a[i]];
			}
		}
		for (int i = 1; i <= tot; i++) {
			ans[b[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
