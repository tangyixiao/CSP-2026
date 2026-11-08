#include <bits/stdc++.h>
using namespace std;

int n, m, a[500010], ans[300010], vis[500010];
bool ok;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	ok = true;
	for (int i = 1; i < n && ok; i++)
		if (a[i] > a[i + 1])
			ok = false;
	if (ok) {
		a[n + 1] = -1;
		for (int i = 1; i <= n; i++)
			if (a[i] != a[i + 1])
				printf("%d ", i);
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) vis[j] = -1;
		for (int j = i; j <= n; j++) {
			if (vis[a[j]] != -1) {
				for (int k = vis[a[j]]; k <= j; k++)
					vis[a[k]] = -1;
			}
			vis[a[j]] = j;
		}
		for (int j = 1; j <= m; j++)
			if (vis[j] != -1)
				ans[j]++;
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);
	return 0;
}
