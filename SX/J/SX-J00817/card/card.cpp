#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], tong[300005], biao[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int x = 1; x <= n; x++) {
		for (int i = x; i <= n; i++) {
			for (int j = x; j < i; j++) {
				if (a[i] == a[j] && biao[j] != 1) {
					for (int k = j; k < i; k++) {
						biao[k] = 1;
					}
				}
			}
		}
		for (int i = x; i <= n; i++) {
			if (biao[i] != 1) {
				tong[a[i]]++;
			}
		}
		for (int i = 1; i <= n; i++) {
			biao[i] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << tong[i] << ' ';
	}
	return 0;
}