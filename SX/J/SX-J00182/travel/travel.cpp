#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1 == c3) {
		cout << 1;
		int f = 1;
		if (c2[0] != c4[0])
			f = 0;
		if (c2[1] == c4[1] && f == 1) {
			cout << 1;
			if (c2[2] == 'D') {
				if (c4[2] == 'F')
					cout << 11;
				else
					cout << "00";
			}
			if (c2[2] == 'F') {
				if (c4[2] == 'D')
					cout << 11;
				else
					cout << "00";
			}
			if (c2[2] == 'A') {
				if (c4[2] == 'B')
					cout << 11;
				else if (c4[2] == 'C')
					cout << 10;
				else
					cout << "00";
			}
			if (c2[2] == 'B') {
				if (c4[2] == 'C' || c4[2] == 'A')
					cout << 11;
				else
					cout << "00";
			}
			if (c2[2] == 'C') {
				if (c4[2] == 'B')
					cout << 11;
				else if (c4[2] == 'A')
					cout << 10;
				else
					cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}


	return 0;
}