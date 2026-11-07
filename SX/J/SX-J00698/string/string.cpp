#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[200005], ans;
char c[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	int m = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (i != 1 && c[i] == c[i - 1]) {
			a[i - 1] += a[i];
			i--;
			n--;
		}
	}
	int i = 1, j = n;
	while (i < j) {
		if (a[i] > a[j]) {
			if (c[i] != c[j]) {
				ans += a[j];
			}
			a[i] -= a[j];
			j--;
		} else {
			if (c[i] != c[j]) {
				ans += a[i];
			}
			a[j] -= a[i];
			i++;
		}
	}
	cout << ans;
	return (0 - 0);
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
