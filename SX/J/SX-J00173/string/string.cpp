#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m[200005];
string s[200005], ss[200005];
ll sum[200005], ans, he;
int t;
bool f, q, o;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m[i] >> s[i];
	}
	for (int i = 1; i <= n; i++) {
		if (f == 0) {
			sum[++t] = m[i];
			ss[t] = s[i];
		} else {
			sum[t] += m[i];
			ss[t] = s[i];
		}
		if (s[i] == s[i + 1]) {
			f = 1;
		} else {
			f = 0;
		}
	}
	for (int i = 1; i <= t; i++) {
		if (sum[i] != sum[t - i + 1] || ss[i] != ss[t - i + 1]) {
			q = 1;
			break;
		}
	}
	if (q == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= t; i++) {
		ll x = sum[i], xx = sum[t - i + 1];
		string y = ss[i], yy = ss[t - i + 1];
		if (y == yy && x == xx) {
			continue;
		}
		if (i != 1) {
			if (o == 1) {
				xx -= he;
			} else {
				x -= he;
			}
		}
		if (y == yy) {
			if (x >= xx) {
				ans += x - xx;
				o = 1;
			} else {
				ans += xx - x;
				o = 0;
			}
		} else {
			if (x >= xx) {
				ans += xx;
				o = 1;
			} else {
				ans += x;
				o = 0;
			}
		}
		he = abs(x - xx);
	}
	cout << ans;
	return 0;
}
