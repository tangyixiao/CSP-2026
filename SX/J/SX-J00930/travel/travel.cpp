#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int l = 0;
	if (c1 == c2) {
		cout << 1;
		l = 1;
	} else {
		cout << 0;
	}
	string ss1, ss2;
	ss1 = s1[0] + s1[1];
	ss2 = s2[0] + s2[1];

	if (l == 1) {
		int ww = 0;
		if (ss1 == ss2) {
			cout << 1;
			ww = 1;
		} else {
			cout << 0;
		}
		int a = 0;
		if (ww == 1) {
			if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s1[2] == 'D'
			        || s1[2] == 'E') && (s2[2] == 'E' || s2[2] == 'D'))) {
				a = 1;
				cout << a;
			} else {
				cout << a;
			}
			if (a == 0) {
				cout << 0;
			} else {
				char n = s1[2], m = s2[2];
				if (n - m == 1 || m - n == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			}
		} else {
			cout << 0;
			cout << 0;
		}

	} else {
		cout << 0;
		cout << 0;
		cout << 0;
	}

	return 0;
}
