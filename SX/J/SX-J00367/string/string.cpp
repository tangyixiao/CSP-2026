#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[200005], k, z1 = 1, z2, num;
char c[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> k;
	z2 = k;
	for (int i = 1; i <= k; i++)
		cin >> a[i] >> c[i];
	while (z1 <= z2) {
		if (a[z1] < a[z2]) {
			a[z2] -= a[z1];
			if (c[z1] != c[z2])
				num += a[z1];
			z1++;
		} else {
			a[z1] -= a[z2];
			if (c[z1] != c[z2])
				num += a[z2];
			z2--;
		}
	}
	cout << num;
	return 0;
}
