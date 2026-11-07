#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, cnt = 0, p = 0;

struct st {
	int k;
	char s;
} a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].k >> a[i].s;
	ll k = 0;
	for (int i = 1; i <= n / 2; i++) {
		ll x = n - i + 1, w, f;
		if (a[i].k == a[x].k && a[i].s != a[x].s)
			cnt += a[i].k, a[x].s = a[i].s;
		else if (a[i].k != a[x].k && a[i].s == a[x].s && x - i > 1) {
			if (a[i].k > a[x].k) {
				w = a[i].k - a[x].k, f = -1;
				while (w != 0) {
					if (a[x + f].k >= w) {
						if (a[x + f].s != a[i].s)
							cnt += w;
						a[x + f].k -= w;
						break;
					} else {
						if (a[x + f].s != a[i].s)
							cnt += a[x + f].k;
						w -= a[x + f].k;
						a[x + f].k = 0;
					}
					f--;
				}
				a[x].k = a[i].k;
			} else {
				w = a[x].k - a[i].k, f = 1;
				while (w != 0) {
					if (a[i + f].k >= w) {
						if (a[i + f].s != a[x].s)
							cnt += w;
						a[i + f].k -= w;
						break;
					} else {
						if (a[i + f].s != a[x].s)
							cnt += a[i + f].k;
						w -= a[i + f].k;
						a[i + f].k = 0;
					}
					f++;
				}
				a[i].k = a[x].k;
			}
		} else if (a[i].k != a[x].k && a[i].s != a[x].s) {
			cnt += min(a[i].k, a[x].k);
			if (a[i].k > a[x].k) {
				w = a[i].k - a[x].k, f = -1;
				while (w != 0) {
					if (a[x + f].k >= w) {
						if (a[x + f].s != a[i].s)
							cnt += w;
						a[x + f].k -= w;
						w = 0;
					} else {
						if (a[x + f].s != a[i].s)
							cnt += a[x + f].k;
						w -= a[x + f].k;
						a[x + f].k = 0;
					}
					f--;
				}
				a[x].s = a[i].s;
				a[x].k = a[i].k;
			} else {
				w = a[x].k - a[i].k, f = 1;
				while (w != 0) {
					if (a[i + f].k >= w) {
						if (a[i + f].s != a[x].s)
							cnt += w;
						a[i + f].k -= w;
						w = 0;
					} else {
						if (a[i + f].s != a[x].s)
							cnt += a[i + f].k;
						w -= a[i + f].k;
						a[i + f].k = 0;
					}
					f++;
				}
				a[i].s = a[x].s;
				a[i].k = a[x].k;
			}
		}
	}
	cout << cnt;
	return 0;
}