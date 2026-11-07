#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, t, ans, cn, tt, r, l, d;
const int N = 2e5+10;

struct Node {
	ll x;
	string s;
} a[N], b[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x;
		cin >> a[i].s;
		t += a[i].x;
	}
	if (t % 2 == 0)
		m = t / 2;
	else
		m = (t / 2) + 1;
	for (int i = 1; i <= n; i++) {
		tt += a[i].x;
		if (tt >= m) {
			cn = i;
			if (t % 2 == 0) {
				b[i].x = a[i].x;
				b[i].s = a[i].s;
			} else {
				a[i].x = tt - m;
			}
			break;
		}
		b[i].x = a[i].x;
		b[i].s = a[i].s;
	}
	r = 1;
	l = n;
	while ((r <= cn && t % 2 == 0 && l > cn) || (r < cn && t % 2 != 0 && l >= cn)) {
		d = min(b[r].x, a[l].x);
		if (b[r].s == a[l].s) {
			b[r].x -= d;
			a[r].x -= d;
		} else {
			ans += d;
			b[r].x -= d;
			a[l].x -= d;
		}
		if (b[r].x == 0)
			r++;
		if (a[l].x == 0)
			l--;
	}
	cout << ans;
	return 0;
}
