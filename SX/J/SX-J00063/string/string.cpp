#include <bits/stdc++.h>
using namespace std;

long long n, a, cnt = 0;
char c;
string s, s1;

signed main() {
	freopen("string.in", "r", stdin)
	freopen("string.out", "w", stdout)
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a >> c;
		for (int j = 0; j < a; ++j) {
			s = s + c;
		}
	}
	for (int i = s.size() - 1; i >= 0; --i) {
		s1 = s1 + s[i];
	}
	if (s == s1) {
		cout << "0";
	} else {
		for (int i = 0; i < s.size(); ++i) {
			if (s1[i] != s[i]) {
				s1[i] = s[i];
				s[s.size() - i] = s1[i];
				cnt++;
			}
		}
		cout << cnt;
	}
	return 0;
}