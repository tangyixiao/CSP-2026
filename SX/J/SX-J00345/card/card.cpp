#include <bits/stdc++.h>
using namespace std;
int a[500005], b[300005], c[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int p = 0, q = 0;
		for (int j = i; j <= n; j++) {
			c[a[j]]++;
		}
		for (int j = i; j <= n; j++) {
			if (a[j] == q) {
				for (int f = p; f < j; f++) {
					c[a[f]]--;
				}
				p = 0;
			}
			if (c[a[j]] != 1 && p == 0) {
				p = j;
				q = a[j];
			}
		}
		for (int j = 1; j <= m; j++) {
			b[j] += c[j];
		}
		for (int j = 1; j <= n; j++) {
			c[j] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}
