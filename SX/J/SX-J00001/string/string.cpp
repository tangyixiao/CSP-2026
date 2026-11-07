#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
pair<int, char> a[200005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].fi >> a[i].se;
	ll sum = 0;
	int r = n, l = 1;
	while (l < r) {
		if (a[r].se == a[l].se) {
			if (a[r].fi > a[l].fi) {
				a[r].fi -= a[l].fi, a[l].fi = 0;
				l++;
			} else if (a[r].fi == a[l].fi) {
				a[r].fi = a[l].fi = 0;
				l++, r--;
			} else {
				a[l].fi -= a[r].fi, a[r].fi = 0;
				r--;
			}
		} else {
			if (a[r].fi > a[l].fi) {
				sum += a[l].fi;
				a[r].fi -= a[l].fi, a[l].fi = 0;
				l++;
			} else if (a[r].fi == a[l].fi) {
				sum += a[r].fi;
				a[r].fi = a[l].fi = 0;
				l++, r--;
			} else {
				sum += a[r].fi;
				a[l].fi -= a[r].fi, a[r].fi = 0;
				r--;
			}
		}
	}
	cout << sum;
	return 0;
}