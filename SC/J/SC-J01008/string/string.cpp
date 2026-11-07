#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, len, cnt, sum;
string s, b;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n;
	while (n--) {
		ll x;
		char c;
		sum += x;
		cin >> x >> c;
		for (ll j = len; j < x + len; j++) {
			s[j] = c;
		}
		len += x;
	}
	for (ll i = 0, j = len - 1; i < len && j >= 0; i++, j--) {
		b[i] = s[j];
	}
	for (ll i = 0; i < len; i++) {
		if (b[i] != s[i]) cnt++;
	}
	cout << cnt / 2;
	return 0;
}