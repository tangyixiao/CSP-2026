#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		string c;
		cin >> c;
		for (int j = 0; j < a; j++) {
			s += c;
		}
	}
	long long ans = 0;
	if (s.size() % 2 != 0) {
		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[s.size() + 1 - i]) {
				ans++;
			}
		}
	} else {
		for (int i = 0; i <= s.size() / 2; i++) {
			if (s[i] != s[s.size() + 1 - i]) {
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
