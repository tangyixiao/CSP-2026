#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int a[N], sum[N], p[N], n, m;

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n <= 5 and m <= 2) {
		if (m == 1)
			cout << n;
		if (m == 2) {
			for (int i = 1; i <= n; i++) {
				if (a[i] == a[n]) {
					sum[a[i]]++;
				} else {
					sum[1]++;
					sum[2]++;
				}
			}
			cout << sum[1] << ' ' << sum[2];
		}
	} else {
		for (int i = 1; i <= n; i++) {
			int k = a[i];
			for (int j = k; j <= m; j++) {
				sum[j]++;
			}
		}
		for (int i = 1; i <= m; i++)
			cout << sum[i] << ' ';
	}
	return 0;
}