#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string n, a, m, b;
	cin >> n >> a >> m >> b;
	if (n == m) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}

	if (a[1] == b[1] && a[0] == b[0]) {
		cout << "1";

	} else {
		cout << "000";
		return 0;
	}

	if (a[2] == 'D' || a[2] == 'F') {
		if (b[2] == 'D' || b[2] == 'F') {
			cout << "11";
		}
	}

	if (a[2] == 'A' || a[2] == 'B' || a[2] == 'C') {

		if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
			cout << "1";
			if (a[2] == 'A' && b[2] == 'B')
				cout << "1";
			if (a[2] == 'A' && b[2] == 'C')
				cout << "0";
			if (a[2] == 'B' && b[2] == 'C')
				cout << "1";
			if (a[2] == 'B' && b[2] == 'A')
				cout << "1";
			if (a[2] == 'C' && b[2] == 'A')
				cout << "0";
			if (a[2] == 'C' && b[2] == 'B')
				cout << "1";
		}
	}

	if (a[2] == 'A' || a[2] == 'B' || a[2] == 'C') {

		if (b[2] == 'D' || b[2] == 'E') {
			cout << "00";
			return 0;
		}
	}

	if (a[2] == 'D' || a[2] == 'E') {

		if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
			cout << "00";
			return 0;
		}
	}
	return 0;
}