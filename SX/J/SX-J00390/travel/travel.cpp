#include <bits/stdc++.h>
using namespace std;
string a, b, s, ss;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> a >> s >> b >> ss;
	if (a != b) {
		cout << "0000\n";
		return 0;
	}
	if (!(s[0] == ss[0] && s[1] == ss[1])) {
		cout << "1000\n";
		return 0;
	}
	if (!(((s[2] >= 'A' && s[2] <= 'C') && (ss[2] >= 'A' && ss[2] <= 'C')) || ((s[2] >= 'D' && s[2] <= 'F')
	        && (ss[2] >= 'D' && ss[2] <= 'F')))) {
		cout << "1100\n";
		return 0;
	}
	if (!((char)s[2] + 1 == ss[2] || (char)ss[2] + 1 == s[2])) {
		cout << "1110\n";
		return 0;
	}
	cout << "1111\n";
	return 0;
}