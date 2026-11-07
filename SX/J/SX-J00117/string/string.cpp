#include <bits/stdc++.h>
using namespace std;
int n, ans;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int u;
		char c;
		cin >> u >> c;
		while (u--) {
			s += c;
		}
	}
	int ls = s.size();
	s = " " + s;
	int ss = ls / 2;
	if ((ls % 2) == 1) {
		for (int i = ss + 1, j = ss + 1; i <= ls; i++, j--) {
			if (s[i] != s[j])
				ans++;
			cout << s[i] << s[j] << endl;
		}
	}
	if ((ls % 2) == 0) {
		for (int i = ss + 1, j = ss; i <= ls; i++, j--) {
			if (s[i] != s[j])
				ans++;
		}
	}
	cout << ans;
	return 0;
}