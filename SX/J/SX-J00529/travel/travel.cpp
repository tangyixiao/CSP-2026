#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a11, a22, s11, s22;
	cin >> a11 >> s11 >> a22 >> s22;
	if (a11 == a22) {
		s += '1';
		int a = (s11[0] - '0') * 10 + (s11[1] - '0');
		int b = (s22[0] - '0') * 10 + (s22[1] - '0');
		char wei1 = s11[2];
		char wei2 = s22[2];
		if (a == b) {
			s += '1';
			if ((wei1 <= 'C' && wei2 <= 'C') || (wei1 > 'C' && wei2 > 'C')) {
				s += '1';
				if (wei1 + 1 == wei2 || wei2 + 1 == wei1) {
					s += '1';
				} else {
					s += '0';
				}
			} else {
				s += '0';
				s += '0';
			}
		} else {
			s += '0';
			s += '0';
			s += '0';
		}

	} else {
		s += '0';
		s += '0';
		s += '0';
		s += '0';
	}
	cout << s;
	return 0;
}