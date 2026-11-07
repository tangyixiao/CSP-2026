#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		char c;
		cin >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	int cnt = 0;
	for (int i = 0; i <= s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}