#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string r1, r2, x1, x2;
	long long ansr1 = 0, ansx1 = 0, ansr2 = 0, ansx2 = 0;
	char x, r;
	cin >> r1 >> r2 >> x1 >> x2;
	for (int i = 0; i < r1.size(); i++) {
		ansr1 = ansr1 * 10 + r1[i] - '0';
	}
	for (int i = 0; i < r1.size(); i++) {
		ansx1 = ansx1 * 10 + x1[i] - '0';
	}
	if (ansr1 == ansx1) {
		cout << 1;
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	for (int i = 0; i < r2.size(); i++) {
		if (r2[i] >= 'A' && r2[i] <= 'Z') {
			r = r2[i];
			break;
		}
		ansr2 = ansr2 * 10 + r2[i] - '0';
	}
	for (int i = 0; i < x2.size(); i++) {
		if (x2[i] >= 'A' && x2[i] <= 'Z') {
			x = x2[i];
			break;
		}
		ansx2 = ansx2 * 10 + x2[i] - '0';
	}
	if (ansr2 == ansx2) {
		cout << 1;
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if ((r == 'D' && x == 'C') || (r == 'C' && x == 'D')) {
		cout << 0;
		cout << 0;
		return 0;
	} else {
		cout << 1;
	}

	if (r == 'A' && x == 'B') {
		cout << 1;
		return 0;
	}
	if (r == 'B' && x == 'A') {
		cout << 1;
		return 0;
	}
	if (r == 'B' && x == 'C') {
		cout << 1;
		return 0;
	}
	if (r == 'C' && x == 'B') {
		cout << 1;
		return 0;
	}
	if (r == 'D' && x == 'F') {
		cout << 1;
		return 0;
	}
	if (r == 'F' && x == 'D') {n
		cout << 1;
		return 0;
	}
	cout << 0;
	return 0;
}
