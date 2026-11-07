#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, h, yqj, zqj, ans;
ll s[200100];
string z[200100];
string str;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> s[i] >> z[i];
		h += s[i];
		for (ll j = 1; j <= s[i]; j++) {
			str += z[i];
		}
	}
	zqj = h / 2;
	for (ll i = 0; i <= zqj; i++) {
		if (str[i] != str[h - i]) {
			ans += 1;
		}
	}
	cout << ans;
	return 0;
}