#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	char a, b, c, d;
	cin >> a >> b >> c >> d;
	b = b - '0';
	d = d - '0';
	if (a == c) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (b - d == 1  || d - b == 1 ) {

		if (b - 2 - 'A' == d - 4 - 'A' || d - 2 - 'A' == b - 4 - 'A') {
			cout << "100";
		} else {
			cout << "111";
		}
	}
	if (b - d > 1 || d - b > 1) {
		if (b - d > 4 || d - b > 4) {
			if (b - d > 19 || d - b > 19) {
				cout << "000";
			}
		} else {
			cout << "110";
		}
	}
	return 0;
}
