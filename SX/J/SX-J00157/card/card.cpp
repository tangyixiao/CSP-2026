#include <bits/stdc++.h>
using namespace std;
int f[300005];
int apex[500005];
int sss[500005];
bool ans[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &sss[i]);
	}
	for (int l = 1; l <= n; l++) {
		memset(f, 0, sizeof(f));
		memset(ans, 0, sizeof(ans));
		for (int i = l; i <= n; i++) {
			if (f[sss[i]] != 0) {
				for (int j = f[sss[i]]; j < i; j++) {
					f[sss[j]] = 0;
					ans[sss[j]] = 0;
				}
			}
			f[sss[i]] = i;
			ans[sss[i]] = 1;
		}
		for (int k = 1; k <= m; k++) {
			apex[k] += ans[k];
		}
	}


	for (int i = 1; i <= m; i++) {
		printf("%d ", apex[i]);
	}
	return 0;
}
