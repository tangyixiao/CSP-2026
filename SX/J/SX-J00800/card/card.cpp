#include <bits/stdc++.h>
using namespace std;
const int N = 5010;
int n, m, a[N], ans[N];
bool A = true, f[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.ans", "w", stdout);
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < a[i - 1])
			A = false;
	}
	int x[N];
	for (int i = 1; i <= n; i++) {
		memset(x, 0, sizeof(x));
		memset(f, 0, sizeof(x));
		int id = 1;
		for (int j = i; j <= n; j++) {
			if (f[a[j]] == true) {
				for (; x[id] != a[j]; id--) {
					f[id] = false;
				}
			} else {
				x[id++] = a[j];
				f[a[j]] = true;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (f[j])
				ans[j]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%d", ans[i]);
	}
	return 0;
}
