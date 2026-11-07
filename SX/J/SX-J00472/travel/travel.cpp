#include <bits/stdc++.h>
using namespace std;
int a, c, v1, v2;
int b, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0";
	}
	if ((b >> 4) == (d >> 4)) {
		cout << "1";
	} else {
		cout << "0";
	}
	if ((b >> 4) == (d >> 4)) {
		if ((b | 0000) == "A" || (b | 0000) == "B" || (b | 0000) == "C") {
			v1 = 1;
		} else if ((b | 0000) == "D" || (b | 0000) == "F") {
			v1 = 2;
		}
		if ((d | 0000) == "A" || (d | 0000) == "B" || (d | 0000) == "C") {
			v2 = 1;
		} else if ((d | 0000) == "D" || (d | 0000) == "F") {
			v2 = 2;
		}
		if (v1 == v2)
			cout << "1";
		else
			cout << "0";
	}
	return 0;
}
