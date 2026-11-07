#include <bits/stdc++.h>
using namespace std;
#define int long long

struct xxx {
	int a;
	char c;
} x[200005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s = "";
	int mn = 1e9;
	for (int i = 1; i <= n; i++) {
		cin >> x[i].a >> x[i].c;
		mn = min(x[i].a, mn);
	}
	for (int i = 1; i <= n; i++) {
		x[i].a = x[i].a - mn + 1;
		while (x[i].a--) {
			s += x[i].c;
		}
	}
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - i - 1]) {
			ans++;
		}
	}
	if (ans == 0) {
		cout << 0;
		return 0;
	}
	cout << (ans / 2 )*mn;
	return 0;
}