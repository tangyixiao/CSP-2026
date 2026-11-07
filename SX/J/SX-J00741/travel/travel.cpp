#include <bits/stdc++.h>
using namespace std;
long long a, b, d, e, c1, f1, g;
char c, f;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d >> e >> f;
	if (a == d) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	//
	if (b == e) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	//
	if (c == 'A' || c == 'B' || c == 'C') {
		c1 = 1;
	}
	if (f == 'A' || f == 'B' || f == 'C') {
		f1 = 1;
	}
	if ((c1 + f1) % 2 == 0) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	//
	g = abs(c - f);
	if (g == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}