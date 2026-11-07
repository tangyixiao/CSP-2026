#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2, sh1, sh2 ;
char ch1, ch2, ch3, ch4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int lena = s1.size();
	int lenb = s2.size();
	int lenc = c1.size();
	int lend = c2.size();
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	for (int i = 0; i <= 1 ; i++) {
		if (c1[i] == 0) {
			for (int j = 2; j <= lenc; j++) {
				ch3 = c1[j] ;
			}
		} else {
			ch3 = c1[i];
		}
	}
	for (int i = 0; i <= 1 ; i++) {
		if (c2[i] == 0) {
			for (int j = 2; j <= lend; j++) {
				ch4 = c2[j] ;
			}
		} else {
			ch4 = c2[i];
		}
	}
	for (int i = 0; i < 2; i++) {
		sh1 = sh1 + s1[i] ;
	}
	for (int i = 0; i < 2 ; i++) {
		sh2 = sh2 + s2[i];
	}
	if ((ch3  == 1 ) || (ch3  == 16 )) {
		cout << "0000";
		return 0;
	}

	if ((ch4  == 1 ) || (ch4  == 16)) {
		cout << "0000";
		return 0;
	}
	for (int i = 2; i <= lena; i++) {
		ch1 = s1[i];
	}
	for (int i = 2; i <= lenb; i++) {
		ch2 = s2[i];
	}
	if (ch3 == ch4) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (sh1 == sh2) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (((ch1 <= 'C') && (ch2 <= 'C') ) || ((ch1 = 'D' ) && (ch2 = 'F') ) || ((ch1 = 'F') && (ch2 = 'D'))) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if ((ch1 = ch2 - 1 ) || (ch2 = ch1 - 1) ) {
		cout << "1";
	} else {
		cout << '0';
	}
	return 0;
}
