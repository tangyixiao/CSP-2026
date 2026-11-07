#include <bits/stdc++.h>
using namespace std;
long long ans[300005];
long long a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int l = i, r = i;
		for (int j = i + 1; j <= n; j++) {
			if (a[l] == a[n]) {
				l = n;
				r = n;
			} else if (a[j] == a[l]) {
				l = j;
				r = j;
			} else {
				bool b = 0;
				for (int k = l + 1; k <= r; k++) {
					if (a[j] == a[k]) {
						r = k;
						b = 1;
					}
				}
				if (!b) {
					r++;
				}
			}
		}
		for (int j = l; j <= r; j++) {
			ans[a[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
/*

*/
