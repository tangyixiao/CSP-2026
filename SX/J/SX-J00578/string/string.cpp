#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n;
int a[N];
char c[N];

bool flag (string s) {
	for (int i = 0; i < s.size(); i ++) {
		if (s[i] != s[s.size() - 1 - i])
			return false;
	}
	return true;
}

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	string s;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j ++) {
			s += c[i];
		}
	}
	if (flag(s)) {
		cout << 0 << endl;
		return 0;
	}
	int maxx = -1;
	for (int i = 0; i < n; i ++) {
		for (int j = i + 1; j < n; j ++) {
			string s1 = s.substr(i, j);
			if (flag(s1)) {
				maxx = max(maxx, j - i + 1);
			}
		}
	}
	cout << s.size() - maxx << endl;
	return 0;
}
