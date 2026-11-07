#include <bits/stdc++.h>
int a[500001], f[300001], m, n;
int t[500001], ans[500001], top;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		top = 0;
		for (int j = i; j <= n; j++) {
			if (f[a[j]]) {
				int x = f[a[j]];
				for (int k = f[a[j]]; k < j; k++) {
					f[t[k]] = 0;
				}
				top = x - 1;
			}
			t[++top] = a[j];
			f[a[j]] = j;
		}
		for (int j = 1; j <= top; j++)
			ans[t[j]]++;
		memset(f, 0, sizeof(f));
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);
}