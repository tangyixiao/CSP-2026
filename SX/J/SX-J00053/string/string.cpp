#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
string s, sa;
long long ans;

int main() {
	freopen("in.string", "r", stdin);
	freopen("out.string", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		ll ai;
		cin >> ai;
		char c;
		cin >> c;
		for (ll j = 1; j <= ai; j++) {
			s += c;
		}
	}
	ll l = s.size();
	for (ll i = 0; i < l / 2; i++) {
		if (s[i] == s[l - i - 1]) {
		} else {
			ans++;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
