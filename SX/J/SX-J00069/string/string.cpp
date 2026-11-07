#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
string s, ss;

void fanz(string fans) {
	for (int i = fans.size() - 1; i >= 0; i--) {
		ss += fans[i];
	}
}
int ant;

signed main() {
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		char ch;
		cin >> x >> ch;
		for (int i = 1; i <= x; i++) {
			s += ch;
		}
	}
	fanz(s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ss[i])
			ant++;
	}
	cout << ant;
	return 0;
}