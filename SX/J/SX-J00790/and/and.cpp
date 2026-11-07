#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200010];
ll n, m;
string b[200010];
ll x, ma = -1;

string lz(ll a) {
	string q = "";

	while (a != 0) {
		if (a % 2 == 0) {
			q = '0' + q;
		} else {
			q = '1' + q;
		}
		a /= 2;
	}
	return q;
}

int yu(string a1, string b1) {
	string s = "";
	for (int i = 0; i <= 31; i++) {
		if (a1[i] == '1' && b1[i] == '1') {
			s += '1';
		} else {
			s += '0';
		}
	}
	ll v = 0, p = 1;
	ll len = s.size() - 1;
	for (int i = len; i >= 0; i--) {
		if (s[i] == '1') {
			v += p;
		}
		p *= 2;
	}
	return v;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	bool isa = true, isb = true;
	for (int i = 0; i <= n; i++) {
		b[i] = "00000000000000000000000000000000";
	}
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		string q = lz(a[i]);

		b[i].erase(b[i].size() - q.size());
		b[i] += q;
		ma = max(ma, a[i]);
		if (isa) {
			x = a[i] + 1;
			while (x != 0) {
				if (x % 2 == 1) {
					isa = false;
					break;
				}
				x /= 2;
			}
		}
	}
	ll ans = -1;

	if (isa) {
		cout << ma;
		return 0;
	} else if (ma == 1) {
		cout << ma;
		return 0;
	} else if (n == m) {
		b[n + 1] = "11111111111111111111111111111111";
		for (int i = 1; i <= n; i++) {
			b[i + 1] = lz(yu(b[i], b[i + 1]));
		}
		cout << yu(b[n], b[n]);
		return 0;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				ans = max(ans, (ll)yu(b[i], b[j]));
			}
		}
		cout << ans;
		return 0;
	}
	cout << 0;
	return 0;
}