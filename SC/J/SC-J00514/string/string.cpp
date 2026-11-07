#include <bits/stdc++.h>

using namespace std;

vector<char> s;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n; cin >> n;
	int siz = 0;
	for (int i = 1; i <= n; ++i) {
		int x; char ch; cin >> x >> ch;
		siz += x;
		while (x--) s.push_back(ch);
	}
	int ans = 0;
	for (int l = 0, r = siz / 2 + 1; l <= siz / 2 && r < s.size(); ++l, ++r) {
		if (s[l] != s[r]) ans++;
	}
	cout << ans;
	return 0;
}