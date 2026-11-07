#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, l, r;
ll left, right, ans;

struct node {
	ll s;
	string k;
} a[10004];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].s >> a[i].k;
	}
	l = 1, r = n;
	while (l < r) {
		if (a[l].k != a[r].k) {
			if (a[l].s < a[r].s) {
				ans += a[l].s;
				a[r].s -= a[l].s;
				l++;
			} else if (a[l].s > a[r].s) {
				ans += a[r].s;
				a[l].s -= a[r].s;
				r--;

			} else {
				ans += a[l].s;
				r--;
				l++;
			}
		} else {
			if (a[l].s < a[r].s) {
				a[r].s -= a[l].s;
				l++;

			} else if (a[l].s > a[r].s) {
				a[l].s -= a[r].s;
				r--;
			} else {
				r--;
				l++;
			}
		}

	}
	cout << ans;
}
