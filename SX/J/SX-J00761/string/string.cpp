#include <bits/stdc++.h>
using namespace std;
int n, len;
long long ans;
int a[200005];
char b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		len += a[i];
	}
	for (int i = 0, j = 1, fj = n;;) {
		if (b[j] != b[fj]) {
			ans += min(a[j], a[fj]);
		}
		i += min(a[j], a[fj]);
		if (a[j] < a[fj]) {
			a[fj] -= a[j];
			j++;
		} else if (a[j] == a[fj]) {
			a[fj] = 0;
			a[j] = 0;
			j++;
			fj--;
		} else {
			a[j] -= a[fj];
			fj--;
		}

		if (j == fj || (a[j] == 0 && a[fj] == 0))
			break;
	}
	cout << ans;
	return 0;
}
