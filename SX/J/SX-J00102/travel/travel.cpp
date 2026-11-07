#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2, s11, s21;
	char s12, s22;
	cin >> c1 >> s11 >> s12 >> c2 >> s21 >> s22;
	if (c1 == c2) {
		cout << "1";
		if (s11 == s21) {
			cout << "1";
			if (s12 == 'A' && s22 == 'B' || s12 == 'B' && s22 == 'C' || s12 == 'D' && s22 == 'F' || s12 == 'B' && s22 == 'A'
			        || s12 == 'C' && s22 == 'B' || s12 == 'F' && s22 == 'D') {
				cout << "11";
			} else if (s12 == 'A' == s22 == 'C' || s12 == 'C' && s22 == 'A') {
				cout << "10";
			} else {
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
