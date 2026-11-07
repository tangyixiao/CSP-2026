#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a;
	char c;
	cin >> n;
	string s;
	s.clear();
	for (int i = 0; i < n; i++) {
		cin >> a >> c;
		for (int j = 0; j < a; j++) {
			s += c;
		}
	}
	int l = s.size();
	int ans = 0;
	for (int i = 0; i < l; i++) {
		if (s[i] != s[l - 1 - i]) {
			s[l - 1 - i] = s[i];
			ans++;
		}
	}
	cout << ans;
	return 0;
}