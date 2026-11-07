#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a, cnt = 0;
string s, c;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	if (n == 1) {
		cout << "0";
		return 0;
	}
	for (ll i = 1; i <= n; i++) {
		cin >> a >> c;
		for (ll j = 1; j <= a; j++)
			s += c;
	}
	ll m = s.size();
	ll x = m;
	if (m % 2 == 0) {
		m / 2;
	} else
		m = (m - 1) / 2;
	for (ll i = 0; i < m; i++) {
		if (s[i] != s[x - i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
