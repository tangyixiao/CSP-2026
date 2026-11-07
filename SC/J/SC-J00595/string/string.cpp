#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long l;
	long long t;
	long long ai;
	char ci;
	long long ans = 0;
	string s;
	cin >> t;


	while (t--) {
		cin >> ai >> ci;
		for (int i = 0; i < ai; i++) {
			s += ci;
		}
	}
	if (s.size() % 2 == 0) {
		l = s.size() / 2;
	} else {
		l = s.size() / 2 + 1;
	}
	for (int i = 0; i < l; i++) {
		if (s[i] != s[(int)s.size() - 1 - i]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}