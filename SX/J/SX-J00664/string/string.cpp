#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 4e5+66;
ll q, x[N], ans;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> q;
	ll ma = 0;
	for (ll i = 1; i <= q; i++) {
		cin >> x[i] >> c[i];
		ma = max(ma, x[i]);
	}
	if (q <= 2000 && ma <= 50) {
		string s = "";
		for (int i = 1; i <= q; i++) {
			string t = "";
			for (int j = 0; j < x[i]; j++) {
				t += c[i];
			}
			s += t;
		}
		//cout << s << '\n';
		int ls = s.size();
		for (int i = 0; i < ls ; i++) {
			if (s[i] != s[ls - i - 1])
				ans++, s[ls - i - 1] = s[i];
			//cout << ans << ' ';
		}
		cout << ans ;
	} else {
		ll n = q;
		for (int i = 1; i <= n; i++) {
			ll j = n - i + 1;
			if (c[i] != c[j]) {
				ans += x[j];
				c[j] = c[i];
			}
			if (c[i] == c[j] && x[i] != x[j]) {
				ll ma = max(x[i], x[j]), mi = min(x[i], x[j]);
				ll sp = ma - mi;
				ans += sp;
				ll k = i;
				if (x[i + 1] - sp > 0)
					x[i + 1] -= sp;
				else {
					while (x[k + 1] - sp > 0) {
						sp -= x[k + 1];
						x[k + 1] = 0;
						k++;
					}
				}

			}
		}
		ll ans2 = 0;
		for (int i = 1; i <= n; i++) {
			ll j = n - i + 1;
			if (c[i] != c[j]) {
				ans2 += x[j];
				c[j] = c[i];
			}
			if (c[i] == c[j] && x[i] != x[j]) {
				ll ma = max(x[i], x[j]), mi = min(x[i], x[j]);
				ll sp = ma - mi;
				ans2 += sp;
				ll k = j;
				if (x[j - 1] - sp > 0)
					x[j - 1] -= sp;
				else {
					while (x[k - 1] - sp > 0) {
						sp -= x[k - 1];
						x[k - 1] = 0;
						k--;
					}
				}

			}
		}
		cout << min(ans2, ans);
	}
	return 0;
}