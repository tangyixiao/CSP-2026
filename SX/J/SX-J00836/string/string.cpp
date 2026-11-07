#include <bits/stdc++.h>
using namespace std;

int a[10010], aa[10000];
char c[10010], cc[10000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long l = 0, ans = 0, nl = 0;
	for (int i = 1; i <= n; i++) {
		int an;
		cin >> an >> c[i];
		a[i] = an;
		l += an;
	}
	for (int i = 1; i <= n; i++) {
		if (nl + a[i] >= (l / 2)) {
			aa[i] = l / 2 - nl;
			cc[i] = c[i];
			break;
		}
		aa[i] = a[i];
		cc[i] = c[i];
		nl += a[i];
	}
	ans = l / 2;
	long long ln = l / 2 + 1 + l % 2;
	long long j = l;
	int i1 = n, i2 = 1;
	while (j >= ln) {

		int a1 = min(a[i1], aa[i2]);
		if (c[i1] == cc[i2]) {

			ans -= a1;

		}
		j -= a1;
		a[i1] -= a1;
		aa[i2] -= a1;
		if (a[i1] == 0)
			i1--;
		if (aa[i2] == 0)
			i2++;
	}
	if (ans < 0)
		cout << 0;
	else
		cout << ans;
	return 0;
}