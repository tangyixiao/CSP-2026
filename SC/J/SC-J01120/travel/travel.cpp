#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	}else {
		cout << "0000";
		return 0;
	}
	if ((s1[0] - '0') * 10 + (s1[1] - '0') == (s2[0] - '0') * 10 + (s2[1] - '0')) {
		cout << 1;
	}else {
		cout << "000";
		return 0;
	}
	char x = s1[2], y = s2[2];
	if (x >= 'D' && y >= 'D') {
		cout << "11";
	}else if (x <= 'C' && y <= 'C') {
		cout << 1;
		if ((x != 'A' && y != 'C') && (x != 'C' && y != 'A')) {
			cout << x << ' ' << y;
			cout << 1;
			return 0;
		}else {
			cout << 0;
			return 0;
		}
	}else {
		cout << "00";
		return 0;
	}
	
	return 0;
} 