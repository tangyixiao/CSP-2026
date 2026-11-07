#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	string a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;

	int z = 0;
	if ((a1[0] - '0') != (b1[0] - '0'))
		z = 1;
	if ((a1[1] - '0') != (b1[1] - '0'))
		z = 1;
	if (z == 0)
		cout << 1;
	else
		cout << "0000";

	if (z == 0) {
		if ((a2[0] - '0') != (b2[0] - '0'))
			z = 1;
		if ((a2[1] - '0') != (b2[1] - '0'))
			z = 1;
		if (z == 0)
			cout << 1;
		else
			cout << "000";
	}

	if (z == 0) {
		z = 1;
		if (a2[2] == 'A' || a2[2] == 'B' || a2[2] == 'C') {
			if (b2[2] == 'A' || b2[2] == 'B' || b2[2] == 'C') {
				z = 0;
				cout << 1;
			} else
				cout << "00";
		} else if (a2[2] == 'D' || a2[2] == 'F') {
			if (b2[2] == 'D' || b2[2] == 'F') {
				z = 0;
				cout << 1;
			} else
				cout << "00";
		}
	}

	if (z == 0) {
		if (a2[2] == 'A') {
			if (b2[2] == 'B')
				cout << 1;
			else
				cout << 0;
		} else if (a2[2] == 'B') {
			if (b2[2] == 'A')
				cout << 1;
			else if (b2[2] == 'c')
				cout << 1;
			else
				cout << 0;
		} else if (a2[2] == 'C') {
			if (b2[2] == 'B')
				cout << 1;
			else
				cout << 0;
		} else if (a2[2] == 'D') {
			if (b2[2] == 'F')
				cout << 1;
			else
				cout << 0;
		} else if (a2[2] == 'F') {
			if (b2[2] == 'D')
				cout << 1;
			else
				cout << 0;
		}
	}
	return 0;
}
