#include <bits/stdc++.h>
using namespace std;
int n;
int ans = 0;
string s;

bool check(string c) {
	int m = c.size();
	string b;
	for (int i = m; i >= 1; i--) {
		b += c[i];
	}
	if (b == c) {
		return true;
	} else {
		return false;
	}
}

int main() {
	freopen("string.in", "r", stdout);
	freopen("string.out", "w", stdout);
	cin >> n;
	int len = 0;
	for (int i = 1; i <= n; i++) {
		int x;
		string a;
		cin >> x >> a;
		len += x;
		for (int j = 1; j <= x; j++) {
			s += a;
		}
	}
	if (!check(s)) {
		for (int i = 1; i <= len / 2; i++) {
			if (s[i] != s[len - i + 1]) {
				++ans;
			}
		}
	}
	cout << ans;
	return 0;
}
