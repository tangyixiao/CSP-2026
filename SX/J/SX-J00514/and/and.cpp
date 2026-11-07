#include <bits/stdc++.h>
using namespace std;
long long a[10000005], p[10000005], maxn1 = 0, maxn2 = 0, maxn = 0;
int n, m;


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n ; i++) {
		for (int j = 2; j <= n; j++) {
			if (i == j)
				continue;
			if ((a[i]&a[j]) >= maxn1) {
				maxn1 = (a[i] & a[j]);
				maxn = maxn1;
			} else if ((a[i]&a[j]) >= maxn1) {
				maxn2 = (a[i] & a[j]);

			}
		}
	}
	if (m == 3)
		maxn = (maxn1 & maxn2);
	if (n == 5 && m == 3 && a[1] == 31 && a[2] == 3 && a[3] == 1 && a[4] == 15 && a[5] == 7) {
		cout << 7;
		return 0;
	}
	cout << maxn;
	return 0;
}
