#include <bits/stdc++.h>
using namespace std;

string a, b, c, s;

int main() {
	//freopen("travel", "r", "stdin");
	//freopen("travel", "w", "stdout");
	cin >> a >> b >> c >> s;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0";
	}
	for (int i = 1; i <= 3; i++) {
		if (b[1] == s[1] && b[2] == s[2]) {
			cout << "1";
		} else {
			cout << "0";
		}
		if (b[3] == 'A' || b[3] == 'B' || b[3] == 'C' && s[3] == 'A' || s[3] == 'B' || s[3] == 'C') {
			cout << "1";
		}
		if (b[3] == 'D' || b[3] == 'F' && s[3] == 'D' || s[3] == 'F') {
			cout << "1";
		} else {
			cout << "0";
		}
		if (b[3] == 'A' && s[3] == 'B' || b[3] == 'C' && s[3] == 'B' || b[3] == 'D' && s[3] == 'F' || s[3] == 'A'
		        && b[3] == 'B' || s[3] == 'C' && b[3] == 'B' || s[3] == 'D' && b[3] == 'F') {
			cout << "1";
		} else {
			cout << "0";
		}
	}
	return 0;
}