#include <bits/stdc++.h>
using namespace std;
#define int long long
string s, a;
int n, x;

bool check(string c) {
	int len = c.size();
	for (int i = 1; i <= len; i++) {
		if (len % 2 == 0) {
			c1 = c.substr(0, len / 2);
			c2 = c.substr(len / 2 + 1, len);
			if (c1[i] = c2[len - i])
				return true;
			else
				return false;
		}
	}
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> s;
		for (int j = 1; j <= x; j++) {
			a[i] += s;
		}
	}
	for (int i = 1; i <= a.size(); i++) {
		if (check(a))
			cout << 0;
		else
		}
	return 0;
}

