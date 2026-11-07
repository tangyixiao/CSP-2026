#include <bits/stdc++.h>
#define  long long int
using namespace std;

signed main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	string s;
	int n, a;
	char ch;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> ch;
		for (int j = 1; j <= a; j++) {
			s += ch;
		}
	}
	int cnt = 0;
	for (int i = 0; i < int(s.size()) / 2; i++) {
		if (s[i] != s[n + 1 - i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}