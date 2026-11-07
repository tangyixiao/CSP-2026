#include <bits/stdc++.h>
using namespace std;
int n, m, a[505], c[505][305];

struct s {
	int w;
	bool b;
} ab[505];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int l = 1, cnt = 0;
		for (int j = 0 + i; j <= n; j++) {
			if (ab[a[j]].b == 0) {
				ab[a[j]].b = 1;
				ab[a[j]].w = l;
				l++;
			} else {
				for (int k = ab[a[j]].w; k <= l; k++) {
					ab[a[k]].b = 0;
					cnt++;
				}
				for (int k = 1; k <= n; k++) {
					if (ab[a[k]].b == 1 && ab[a[k]].w > ab[a[j]].w) {
						ab[a[k]].w -= cnt;
					}
				}
				ab[a[j]].b = 1;
				l = l - cnt + 2;
				ab[a[j]].w = l - 1;
			}
		}
		for (int j = 1; j < l; j++) {
			c[i][a[j]] = 1;
		}
	}
	for (int i = 1; i <= m; i++) {
		int sum = 0;
		for (int j = 1; j <= n; j++) {
			if (c[j][i] == 1) {
				sum++;
			}
		}
		cout << sum << " ";
	}
	return 0;
}
