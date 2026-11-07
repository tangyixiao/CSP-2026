#include <bits/stdc++.h>
using namespace std;
long long n, cnt = 0, a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	a[0] = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", &a[i], &c[i]);
		a[i] += a[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		long long s, e;
		if (a[i] > a[n] / 2 && a[i - 1] + 1 > a[n] / 2)
			break;
		else if (a[i] > a[n] / 2) {
			s = a[n] - a[i - 1], e = a[n] / 2 + 1;
		} else {
			s = a[n] - a[i - 1], e = a[n] - a[i] + 1;
		}
		int ta = lower_bound(a + 1, a + 1 + n, s) - a, tb = lower_bound(a + 1, a + 1 + n, e) - a;
		if (c[ta] != c[i] && ta != tb)
			cnt += (s - a[ta - 1]);
		if (c[tb] != c[i] && ta != tb)
			cnt += (a[tb] - e + 1);
		if (c[tb] != c[i] && ta == tb)
			cnt += s - e + 1;
		for (int j = tb + 1; j < ta; j++) {
			if (c[j] != c[i])
				cnt += (a[j] - a[j - 1]);
		}
	}
	cout << cnt;
	return 0;
}
