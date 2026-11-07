#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500010], d[500010], dis[300010], res[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", a + i);
	}
	for (int i = 1; i <= n; i++) {
		memset(d, 0, sizeof d);
		int ld = 0;
		for (int j = i; j <= n; j++) {
			if (dis[a[j]] == 0) {
				for (int t = dis[a[j]]; t <= ld; t++) {
					d[t] = 0;
					ld--;
				}
			}
			d[++ld] = a[j];
		}
		for (int j = 1; j <= ld; j++) {
			res[d[j]++];
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", res[i]);
	}
	return 0;
}
