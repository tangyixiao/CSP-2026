#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, x, ans = 0;
	char a;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> x >> a;
		for (int j = 1; j <= x; j++) {
			s += a;
		}
	}
	int d = s.length();
	for (long long i = 0; i <= d / 2; i++) {
		if (s[i] == s[d - (i + 1)]) {
			continue;
		} else {
			ans++;
		}
	}
	cout << ans;
	return 0;
}
