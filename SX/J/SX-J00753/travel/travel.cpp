#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	int r = (b[0] - '0') * 10 + b[1] - '0', x = (d[0] - '0') * 10 + d[1] - '0';
	char R = b[2], X = d[2];
	if (a == c) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if (r == x) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if ((R <= 'C' && X <= 'C') || (R >= 'D' && X >= 'D')) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if ((abs((int)(R - X) ) == 1 ) || ((R >= 'D' && X >= 'D') && abs((int)(R - X) ) == 2)) {
		cout << 1;
	} else
		cout << 0;
	return 0;
}
