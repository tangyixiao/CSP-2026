#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, x, m = 0, p = 0;
	string s, y;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		for (int j = 1; j < x; j++) {
			y = y + y;
		}
		s = s + y;
		m = m + x;
	}
	for (int k = 0; k <= m - 1; k++) {
		if (s[k] != s[m - 1 - k]) {
			p++;
		}
	}
	if (p % 2 == 0)
		cout << p / 2;
	else
		cout << (p - 1) / 2;
	return 0;
}
