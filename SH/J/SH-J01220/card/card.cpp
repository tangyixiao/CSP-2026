#include<bits/stdc++.h>
using namespace std;

int a[500005], ans[300005], c[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) c[j] = 0;
		for (int j = i; j <= n; j++) {
			bool flag = false;
			int p = -1;
			for (int k = 1; k <= n; k++)
				if (c[k] == a[j]) { p = k; flag = true; break; }
			if (flag) {
				for (int k = p; k <= n; k++) c[k] = 0;
				cnt = p - 1;
			}
			c[++cnt] = a[j];
		}
		for (int j = 1; j <= n; j++) ans[c[j]]++;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i];
		if (i != n) cout << " ";
	}
	return 0;
}
