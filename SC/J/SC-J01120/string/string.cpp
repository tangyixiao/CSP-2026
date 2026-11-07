#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, m = 0;
	cin >> n;
	string s = "";
	while (n--) {
		int x;
		string str;
		cin >> x >> str;
		m += x;
		for (int i = 0; i < x; i++) {
			s += str;
		}
	}
	int ans = 0;
	for (int q = 0, p = m - 1; q <= p; q++, p--) {
		if (s[q] != s[p]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
} 