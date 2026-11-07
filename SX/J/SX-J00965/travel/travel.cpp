#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int x, a, b, y;
	char c, d;
	cin >> x >> a >> c >> y >> b >> d;
	if (x == y) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (x == y && a == b) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (x == y && a == b) {
		if ((int)c >= 65 && (int)c <= 67 && (int)d >= 65 && (int)d <= 67) {
			cout << 1;
		} else if ((int)c == 68 && (int)c == 69 && (int)d == 68 && (int)d <= 69) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (x == y && a == b && ((int)c == (int)d + 1 && c != 'D' || (int)d == (int)c + 1 && d != 'D')) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}