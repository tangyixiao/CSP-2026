#include <bits/stdc++.h>
using namespace std;
int n, m;
long long dp[200005], a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	long long maxn1 = 0, maxn = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn1 = max(maxn1, a[i]);
	}
	if (m == 1) {

		cout << maxn1;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxn = max(maxn, a[i] & a[j]);
			}
		}
		cout << maxn;
		return 0;
	}
	
	if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					maxn = max(maxn, a[i] & a[j] & a[k]);
				}
			}
		}
		cout << maxn;
		return 0;
	}
	if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int x = k + 1; x <= n; x++) {
						maxn = max(maxn, a[i] & a[j] & a[k] & a[x]);
					}
				}
			}
		}
		cout << maxn;
		return 0;
	}
	if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int x = k + 1; x <= n; x++) {
						for (int y = x + 1; y <= n; y++) {
							maxn = max(maxn, a[i] & a[j] & a[k] & a[x] & a[y]);
						}
					}
				}
			}
		}
		cout << maxn;
		return 0;
	}
	
	return 0;
}
