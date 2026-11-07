#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a1, a2, b1, b2, key = "0000";
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 == b1) {
		key[0] = '1';
	} else {
		cout << key;
		return 0;
	}
	if (a2[0] == b2[0] && a2[1] == b2[1]) {
		key[1] = '1';
	} else {
		cout << key;
		return 0;
	}
	char d1 = a2[2], d2 = b2[2];
	if ((int(a2[2] - 'A') <= 2 && int(b2[2] - 'A') <= 2)) {
		key[2] = '1';
	} else if ((a2[2] == 'D' && b2[2] == 'F') || (a2[2] == 'F' && b2[2] == 'D')) {
		cout << "1111";
		return 0;
	} else {
		cout << key;
		return 0;
	}

	if (int(d1) == int(d2) + 1 || int(d1) == int(d2) - 1) {
		key[3] = '1';
	} else {
		cout << key;
		return 0;
	}
	cout << key;
	return 0;
}
