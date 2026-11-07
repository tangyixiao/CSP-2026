#include <bits/stdc++.h>
using namespace std;

int n, m, a[500010];
bool b[500010];
long long ans[300010];
int c[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
		
	for (int i = 1; i <= n; i++) {
		memset(b, false, sizeof(b));
		int l = 0;
		for (int j = i; j <= n; j++) {
			if (!b[a[j]]) {
				c[++l] = a[j];
				b[a[j]] = true;
			} else {
				int pos = 0;
				for (int k = 1; k <= l; k++) {
					if (a[j] == c[k]) {
						pos = k;
					}
				}
				for (int k = pos; k <= l; k++) {
					b[c[k]] = false;
					c[k] = 0;
				}
				l = pos;
				c[l] = a[j];
				b[a[j]] = true;
			}
		}
		for (int j = 1; j <= l; j++) {
			ans[c[j]]++;
		}
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);
	return 0;
}
