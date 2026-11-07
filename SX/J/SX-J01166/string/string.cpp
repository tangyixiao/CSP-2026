#include <bits/stdc++.h>
using namespace std;
#define int long long
string s;
string mn;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, minn = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		char c
		cin >> x >> c;
		while (x--) {
			s += c;
		}
	}
	for (int i < s.size() - 1; i >= 0; i++) {
		mn[i] = s[i];
	}
	cout << 1;
	return 0;
}