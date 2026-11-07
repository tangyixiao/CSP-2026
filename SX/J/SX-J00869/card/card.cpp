#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500005], pre[500005];

int g[500005] = {0};
int sum [500005] = {0};

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i ; j < n; j++) {
			pre[i] = a[j];
			g[a[j]] += 1;
			if (g[a[j]] > 1) {
				for (int x = 0; x < n; x++) {
					if (pre[x] == a[j]) {
						for (int l = x; l < n; l++) {
							pre[l] = 0;
						}
						pre[x] = a[j];
						g[a[j]] = 1;
						break;
					}
				}
			}
		}
		for (int k = 0; k <= m; k++) {
			if (pre[k] != 0) {
				sum[pre[k]] += 1;
			}
		}
		pre[500005] = {0};
		g[500005] = {0};
	}
	cout << sum[1];
	for (int i = 2; i <= m; i++) {
		printf(" ");
		cout << sum[i];
	}
	return 0;
}