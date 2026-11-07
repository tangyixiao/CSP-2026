#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500005];
int b[500005];
bool bb[500005];
int ans[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (b[j] != 0) {
				b[j] = 0;

			}
			bb[a[j]] = 0;
		}
		for (int j = i; j <= n; j++) {
			if (b[a[j]] == 0) {
				b[a[j]] = j;
			} else {
				for (int k = b[a[j]]; k < j; k++) {
					b[k] = 0;
				}
				b[a[j]] = j;
			}
		}
		for (int j = i; j <= n; j++) {
			if (b[a[j]] != 0 && bb[a[j]] == 0) {
				ans[a[j]]++;
				bb[a[j]] = 1;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
