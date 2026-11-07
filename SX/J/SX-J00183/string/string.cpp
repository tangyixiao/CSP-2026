#include <bits/stdc++.h>
using namespace std;
#define ll int
ll cs, sum, ans, n;
string s, a, ss, sss;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> cs >> a;
		for (ll j = 1; j <= cs; j++)
			s += a;
	}
	for (ll i = 0; i < s.size() / 2; i++) {
		ss += s[i];
	}
	if (s.size() % 2 == 0) {
		for (ll i = s.size() - 1; i >= s.size() / 2; i--)
			sss += s[i];
	} else {
		for (ll i = s.size() - 1; i > s.size() / 2; i--)
			sss += s[i];
	}
	//cout << ss << " " << sss << "\n";
	if (ss == sss)
		cout << 0;
	else {
		for (ll i = 0; i < s.size() / 2; i++) {
			if (ss[i] != sss[i])
				ans++;
		}
		cout << ans;
	}
	return 0;
}
