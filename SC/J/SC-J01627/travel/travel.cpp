#include <bits/stdc++.h>

using namespace std;

string a, b, c, d;
int main () {
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	

	bool flag = true;
	for (int i = 0; i < b.size() - 1; i++) {
		if (b[i] != d[i]) {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		cout << 1;
	} else cout << 0;
	char x = b[b.size() - 1], r = d[d.size() - 1];
	if (flag == false) {
		cout << 0;
	}
	else {
		if (x == 'A') {
			if (r == 'B' || r == 'C') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'B') {
			if (r == 'A' || r == 'C') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'C') {
			if (r == 'A' || r == 'B') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'D') {
			if (r == 'F') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'F') {
			if (r == 'D') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
	}
	
	if (flag == false) {
		cout << 0;
	}
	else {
		if (x == 'A') {
			if (r == 'B') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'B') {
			if (r == 'A' || r == 'C') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'C') {
			if (r == 'B') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'D') {
			if (r == 'F') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		if (x == 'F') {
			if (r == 'D') {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
	}
	return 0;
}