#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	long long n;
	long long L = 0;
	long long a[200050];
	char c[200050];
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		L += a[i];
	}

	long long lc, rc, l, r;
	long long ans;
	ans  = 0;
	lc = 1;
	rc = n;
	l = r = 0;
	long long l2 = L / 2;
	if ((L & 1) == 0) {
		long long cnt = 0;

		long long i = 1;
		while (cnt < l2) {
			cnt += a[i];
			i++;
		}
		if (cnt > l2) {
			long long tempa = a[i], tempc = c[i];
			a[i] = cnt - l2;
			c[i] = c[i - 1];
			a[i - 1] -= cnt - l2;
			for (long long j = n; j >= i + 2; j--) {
				a[j] = a[j - 1];
				c[j] = c[j - 1];
			}
			a[i + 1] = tempa;
			c[i + 1] = tempc;
			n++;
		}
	} else {
		long long cnt = 0;

		long long i = 1;
		while (cnt <= l2) {
			cnt += a[i];
			i++;
		}
		l2++;
		a[i - 1]++;
		if (cnt + 1 > l2) {
			long long tempa = a[i], tempc = c[i];
			a[i] = cnt + 1 - l2;
			c[i] = c[i - 1];
			a[i - 1] -= cnt + 1 - l2;

			for (int j = n + 1; j >= i + 2; j--) {
				a[j] = a[j - 1];
				c[j] = c[j - 1];
			}
			a[i + 1] = tempa;
			c[i + 1] = tempc;
			n++;

		}

		L++;

		//cout << cnt << endl;
	}

	/*	for (int i = 1; i <= n; i++) {
			cout << a[i];

		}
		for (int i = 1; i <= n; i++) {
			cout <<  c[i];

		}*/
	long long cnt0 = 0;
	while (cnt0 < l2) {
		if (a[lc] - l < a[rc] - r) {
			if (c[lc] != c[rc]) {
				ans += a[lc] - l;
			}
			cnt0 += a[lc] - l;
			r += a[lc] - l;
			lc++;
			l = 0;


		} else if (a[lc] - l > a[rc] - r) {
			if (c[lc] != c[rc]) {
				ans += a[rc] - r;
			}
			cnt0 += a[rc] - r;
			l += a[rc] - r;
			rc--;
			r = 0;

		} else {
			if (c[lc] != c[rc]) {
				ans += a[lc] - l;
			}
			cnt0 += a[lc] - l;
			lc++;
			l = 0;
			rc--;
			r = 0;
		}
	}
	//cout << cnt0;

	cout << ans;
	return 0;
}
