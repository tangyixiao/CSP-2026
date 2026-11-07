#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;

	string f = "ABCDE";
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (b[0] + b[1] == d[0] + d[1]) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (b[2] < f[3] && d[2] < f[3]) {
		cout << "1";
	} else if (b[2] >= f[3] && d[2] >= f[3]) {
		cout << "1";
	}

	else {
		cout << "00";
		return 0;
	}
	if (b[2] + 1 == d[2] || b[2] - 1 == d[2]) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
