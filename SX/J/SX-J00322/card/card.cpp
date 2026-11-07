#include <bits/stdc++.h>
using namespace std;
int n, m;
int sum[300005], a[500005], b[300005], c[300005];
bool d[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (b[a[j]] == 0) {
				b[a[j]] = j;
				c[a[j]]++;
			} else {
				c[a[j]]++;
				for (int l = b[a[j]]; l < j; l++) {
					if (d[l] == 0) {
						c[a[l]]--;
						d[l] = 1;
					}
				}
				b[a[j]] = j;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (c[j] > 0) {
				sum[j]++;
			}
		}
		memset(c, 0, sizeof(c));
		memset(b, 0, sizeof(b));
		memset(d, 0, sizeof(d));
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << " ";
	}
	return 0;
}