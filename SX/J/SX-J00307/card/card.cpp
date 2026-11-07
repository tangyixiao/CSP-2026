#include <bits/stdc++.h>
using namespace std;

int n, m, a[500005], b[500005], xb = 1, ans[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int ls = 1; ls <= n; ls++) {
		for (int i = ls; i <= n; i++) {
			for (int j = 1; j < xb; j++) {
				if (b[j] == a[i]) {
					xb = j;
					for (int ql = j; ql <= xb; ql++) {
						b[ql] = 0;
					}
					break;
				}
			}
			b[xb] = a[i];
			xb++;
		}
		for (int i = 1; i <= xb; i++) {
			ans[b[i]]++;
		}
		for (int i = 1; i <= xb; i++) {
			b[i] = 0;
		}
		xb = 1;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}