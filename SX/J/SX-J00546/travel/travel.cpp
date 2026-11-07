#include <bits/stdc++.h>
using namespace std;
long long c1, c2, a, b, d = 0;
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	//1
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	//2
	a = (s1[0] - '0') * 10 + (s1[1] - '0');
	b = (s2[0] - '0') * 10 + (s2[1] - '0');
	if (a == b) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	//3
	if (a == b) {
		if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
			if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') {
				cout << "1";
				d = 1;
			} else {
				cout << "00";
				return 0;
			}
		} else if (s1[2] == 'D' || s1[2] == 'F') {
			if (s2[2] == 'D' || s2[2] == 'F') {
				cout << "1";
				d = 2;
			} else {
				cout << "00";
				return 0;
			}
		}
	}
	//4
	/*if (d == 1) {
		if (s1[2] - s2[2] == 1 || s2[2] - s1[2] == 1) {
			cout << "1";
		}
	} else if (d == 2) {
		cout << "1";
	} else if (d == 0) {
		cout << "0";
	}*/
	if (d == 1) {
		if ((s1[2] == 'A' && s2[2] == 'C' ) || (s2[2] == 'A' && s1[2] == 'C') )
			cout << "0";
		else
			cout << "1";
	}
	if (d == 2) {
		cout << "1";
	}
	if (d == 0) {
		cout << "0";
	}
	return 0;
}
