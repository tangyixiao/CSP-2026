#include <bits/stdc++.h>
using namespace std;
char s[3];
int i = 1, j = 1;
int c[10];



int main() {
//	freopen("travel.in", "r", stdin);
//	freopen("travel.out", "w", stdout);
	int c1, c2;
	char s11, s12, s13, s21, s22, s23;
	cin >> c1 >> s11 >> s12 >> s13 >> c2 >> s21 >> s22 >> s23;
	//cout << c1 << s11 << s12 << s13 << c2 << s21 << s22 << s23;
	if (c1 == c2) {
		if ((s11 == s21) && (s12 == s22)) {
			if (s13 == 'A') {
				if (s23 == 'B') {
					cout << "1111" << endl;
				} else if (s23 == 'C') {
					cout << "1110" << endl;
				} else {
					cout << "1100" << endl;
				}
			} else if (s13 == 'B') {
				if ((s23 == 'A') || (s23 == 'C')) {
					cout << "1111" << endl;
				} else {
					cout << "1100" << endl;
				}
			} else if (s13 == 'C') {
				if (s23 == 'B') {
					cout << "1111" << endl;
				} else if (s23 == 'A') {
					cout << "1110" << endl;
				} else {
					cout << "1100" << endl;
				}
			} else if (s13 == 'D') {
				if ((s23 == 'F')) {
					cout << "1111" << endl;
				} else {
					cout << "1100" << endl;
				}
			} else  if (s13 == 'F') {
				if ((s23 == 'D')) {
					cout << "1111" << endl;
				} else {
					cout << "1100" << endl;
				}
			}
		} else {
			cout << "1000" << endl;
		}
	} else {
		cout << "0000" << endl;
	}
	return 0;
}