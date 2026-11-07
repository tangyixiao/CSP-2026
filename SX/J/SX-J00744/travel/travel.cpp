#include <bits/stdc++.h>
using namespace std;
long long c1, s1, c2, s2;
char a, b;

int main() {
	freopen("travel.in", "r"stdin);
	freopen("travel.out", "w"stdout);
	cin >> c1 >> c2 >> a >> s1 >> s2 >> b;
	if (c1 == s1) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (c2 == s2) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (((a == 'C' || a == 'B' || a == 'A') && (b == 'C' || b == 'B' || b == 'A')) || ((a == 'D' || a == 'E') && (b == 'D'
	        || b == 'E'))) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (a - b == -1 || a - b == 1) {
		cout << "1";
	} else {
		cout << "0";
		return 0;
	}
	return 0;
}