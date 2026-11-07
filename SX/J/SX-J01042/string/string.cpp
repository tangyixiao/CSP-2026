#include <bits/stdc++.h>
using namespace std;
int n, lk, rk;
long long sum, i, ans;

struct node {
	int s;
	char c;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int f = 1; f <= n; f++) {
		cin >> a[f].s;
		cin >> a[f].c;
		sum += a[f].s;
	}
	sum += 1;
	sum /= 2;
	lk = 1;
	rk = n;
	while (i < sum) {
		if (a[lk].s > a[rk].s) {
			if (a[lk].c != a[rk].c) {
				ans += a[rk].s;
			}
			i += a[rk].s;
			a[lk].s -= a[rk].s;
			rk--;
		}
		if (a[lk].s < a[rk].s) {
			if (a[lk].c != a[rk].c) {
				ans += a[lk].s;
			}
			i += a[lk].s;
			a[rk].s -= a[lk].s;
			lk++;
		}
		if (a[lk].s == a[rk].s) {
			if (a[lk].c != a[rk].c) {
				ans += a[lk].s;
			}
			i += a[lk].s;
			lk++;
			rk--;
		}
	}
	cout << ans;
	return 0;
}
