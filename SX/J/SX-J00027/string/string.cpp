#include <bits/stdc++.h>
#define int long long

using namespace std;

int T, ans;
string s;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (cin >> T; T--;) {
		int n;
		char c;
		cin >> n >> c;
		string d = to_string(c);
		for (int i = 1; i <= n; i ++) {
			s += c;
		}
	}

	for (int l = 0, r = s.size() - 1; l <= r; l ++, r --) {
		if (s[l] != s[r])
			ans ++;
	}

	cout << ans;
	return 0;
}
