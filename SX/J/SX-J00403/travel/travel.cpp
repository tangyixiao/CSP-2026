#include <bits/stdc++.h>
using namespace std;
char c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2 ;
	if ((int)c1 == (int)c2) {
		cout << "1";
		if ((int)s1 / 100 == (int)s2 / 100) {
			cout << "1";
			if (((char)s1 % 100 >= 'A' && (char)s2 % 100  >= 'A' && (char)s1 % 100 <= 'C' && (char)s2 % 100  <= 'C')
			        || ((char)s1 % 100 == 'D'
			            && (char)s2 % 100 == 'F')
			        || ((char)s1 % 100 == 'F'
			            && (char)s2 % 100 == 'D') ) {
				cout << "1";
				if (((char)s1 % 100  == 'A' && (char)s2 % 100  == 'B') || ((char)s1 % 100  == 'C' && (char)s2 % 100  == 'B')
				        || ((char)s1 % 100  == 'B'
				            && (char)s2 % 100  == 'A')
				        || ((char)s1 % 100 == 'B' && (char)s2 % 100  == 'C') || ((char)s1 % 100  == 'D' && (char)s2 % 100  == 'F')
				        || ((char)s1 % 100  == 'F'
				            && (char)s2 % 100 == 'D') ) {
					cout << "1";
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}

	} else
		cout << "0000";

	return 0;
}
