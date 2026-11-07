#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, minn, cnt;
char ch;
string s;

bool hw(string s) {
	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == s[s.size() - i])
			return 1;
		else
			return 0;
	}
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n * 2; i++) {
		cin >> m >> ch;
		minn = min(minn, m);
		for (int j = 1; j <= m; i++) {
			s += ch;
		}
	}
	if (hw(s))
		cout << 0;
	else
		cout << minn;

	return 0;
}
