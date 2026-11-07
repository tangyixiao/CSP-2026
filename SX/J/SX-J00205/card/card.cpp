#include <bits/stdc++.h>
using namespace std;
int n, m, a[1005], ans[1005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		int b[1005], cnt[1005];
		for (int j = i; j <= n; j++) {
			b[j] = a[j], cnt[b[j]] = 0;
			for (int k = j - 1; k >= i; k--) {
				if (b[k] == b[j]) {
					for (int l = k; l < j; l++)
						b[l] = 0;
					k = 0;
				}
			}
		}
		for (int j = i; j <= n; j++) {
			if (!cnt[b[j]])
				ans[b[j]]++, cnt[b[j]] = 1;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}