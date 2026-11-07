#include <bits/stdc++.h>
using namespace std;
string a, b, c, s;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> s;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (b[0] == s[0] && b[1] == s[1] && a == c) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C' && s[2] == 'A' || s[2] == 'B' || s[2] == 'C' && a == c) {
		cout << "1";
	} else if (b[2] == 'D' || b[2] == 'F' && s[2] == 'D' || s[2] == 'F' && a == c && b[0] == s[0] && b[1] == s[1] ) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (b[2] == 'A' && s[2] == 'B' || b[2] == 'C' && s[2] == 'B' || b[2] == 'D' && s[2] == 'F' || s[2] == 'A'
	        && b[2] == 'B' || s[2] == 'C' && b[2] == 'B' || s[2] == 'D' && b[2] == 'F' && a == c && b[0] == s[0] && b[1] == s[1]) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}