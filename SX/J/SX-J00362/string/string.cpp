#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
char c[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s;
	int sum1 = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum1 += a[i];
	}
	if (sum1 % 2 == 0) { //Å¼Êı
		sum1 = sum1 / 2;
		int vis, x;
		for (int i = 1; i <= n; i++) {
			if (sum1 <= a[i]) {
				vis = i;
				x = sum1;
				break;
			} else {
				sum1 -= a[i];
			}
		}
		for (int i = n; i > vis; i--) {
			a[i + 2] = a[i];
			c[i + 2] = c[i];
		}
		a[vis + 2] = a[vis] - x;
		a[vis + 1] = 1;
		a[vis] = x - 1;
		c[vis + 1] = c[vis];
		c[vis + 2] = c[vis];
		vis++;
		int l = vis - 1, r = vis + 1;
		int sum = 0;
		while (l > 0 || r <= n + 2) {
			if (a[l] < a[r]) {
				if (c[l] != c[r]) {
					sum += a[l];
				}
				a[r] -= a[l];
				l--;
			}
			if (a[l] >= a[r]) {
				if (c[l] != c[r]) {
					sum += a[r];
				}
				a[l] -= a[r];
				r++;
			}
		}
		cout << sum;
	} else {

		sum1 = (sum1 / 2) + 1;
		int vis, x;
		for (int i = 1; i <= n; i++) {
			if (sum1 <= a[i]) {
				vis = i;
				x = sum1;
				break;
			} else {
				sum1 -= a[i];
			}
		}
		for (int i = n; i > vis; i--) {
			a[i + 2] = a[i];
			c[i + 2] = c[i];
		}
		a[vis + 2] = a[vis] - x;
		a[vis + 1] = 1;
		a[vis] = x - 1;
		c[vis + 1] = c[vis];
		c[vis + 2] = c[vis];
		vis++;
		int l = vis - 1, r = vis + 1;
		int sum = 0;
		while (l > 0 || r <= n + 2) {
			if (a[l] < a[r]) {
				if (c[l] != c[r]) {
					sum += a[l];
				}
				a[r] -= a[l];
				l--;
			}
			if (a[l] >= a[r]) {
				if (c[l] != c[r]) {
					sum += a[r];
				}
				a[l] -= a[r];
				r++;
			}
		}
		cout << sum;
	}

	return 0;
}