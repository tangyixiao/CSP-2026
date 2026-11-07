#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5+10;
ll n, a[N], b[N], c[N], l, r, ans, mid, cheak, L, R, f;
char sa[N], sb[N], sc[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> sa[i];
		ans += a[i];
	}

	ans = (ans + 1) / 2;
	f = ans;
	for (int i = 1; i <= n; i++) {
		if (f % 2 == 0) {
			if (ans == 0) {
				cheak = 1;
			}
		}

		if (a[i] >= ans && cheak == 0 && f % 2 != 0) {
			cheak = 1;
			if (ans == 1) {
				c[++R] = a[i] - 1;
				sc[R] = sa[i];
			} else if (a[i] == ans) {
				b[++R] = a[i] - 1;
				sc[R] = sa[i];
			} else {
				b[++L] =  ans - 1;
				sb[L] = sa[i];
				c[++R] = a[i] - ans;
				sc[R] = sa[i];
			}

		} else if (!cheak) {
			ans -= a[i];
			b[++L] = a[i];
			sb[L] = sa[i];
		} else {
			c[++R] = a[i];
			sc[R] = sa[i];
		}
	}
	l = 1;
	r = 1;
	/*for (int i = 1; i <= L; i++) {
		cout << sb[i] << " " << b[i] << "\n";
	}
	cout << "\n";
	for (int i = 1; i <= R; i++) {
		cout << sc[i] << " " << c[i] << "\n";
	}*/
	while (l <= L && r <= R) {
		//cout << 1;
		if (sb[l] != sc[r]) {
			mid += min(b[l], c[r]);

		}
		if (b[l] == c[r]) {
			l++;
			r++;
		} else if (b[l] > c[r]) {
			b[l] -= c[r];
			r++;
		} else {
			c[r] -= b[l];
			l++;
		}
	}
	cout << mid;
	return 0;
}