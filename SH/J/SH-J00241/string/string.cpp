#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
// I don't want to go into the mihuoxingweidashang.
// RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;RP++;
// SH-S00271 RP++;
ll n;
ll a[200009], sum = 0, m, f;
char c[200009];
ll s[200009];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		sum += a[i], s[i] = s[i - 1] + a[i];
	}
	m = sum / 2; // first half and last half
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += a[i];
		if (sum > m) {
			f = i;
			break;
		}
	}
	if (s[n] % 2) a[f]--;
	// freopen("string.in", "r", stdin);
	// freopen("string.out", "w", stdout);
	// Trick || Treat!
	for (int i = 1; i <= n; i++) {
		s[i] = s[i - 1] + a[i];
	}
	ll l = f, r = f, ls = 0, rs = 0;
	ll tmp = min(s[f] - m, m - s[f - 1]);
	a[f] -= tmp * 2;
	for (int i = 1; i <= n; i++) {
		s[i] = s[i - 1] + a[i];
	}
	m = s[n] / 2;
	if (a[f] == 0) {
		r++, l--;
	} else if (s[f] <= m) {
		r++;
	} else {
		l--;
	}
	ll ans = 0;
	for (; r <= n;) {
		if (a[l] - ls < a[r] - rs) {
			ans += (c[l] != c[r]) * (a[l] - ls);
			rs += a[l] - ls;
			ls = 0;
			l--;
		} else {
			ans += (c[l] != c[r]) * (a[r] - rs);
			ls += a[r] - rs;
			rs = 0;
			r++;
		}
	}
	cout << ans;
	// 8:58 ~ 10:03
	return 0;
}