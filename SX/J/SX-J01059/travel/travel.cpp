#include <bits/stdc++.h>
using namespace std;
string c1, c2; //c ³µÏáºÅ
char s1, s2; //s ×ùÎ» A B C
int h1, h2;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);


	cin >> c1 >> h1 >> s1;
	cin >> c2 >> h2 >> s2;

	if (c1 == c2) {
		cout << "1";
		if (h1 == h2) {
			cout << "1";
			if (((s1 == 'A' or s1 == 'B' or s1 == 'C') and (s2 == 'A' or s2 == 'B' or s2 == 'C')) or ((s1 == 'D' or s1 == 'F')
			        and (s2 == 'D' or s2 == 'F'))) {
				cout << "1";
				if (s1 == 'A' and s2 == 'B') {
					cout << "1";
					return 0;
				} else if (s1 == 'B' and s2 == 'C') {
					cout << "1";
					return 0;
				} else if (s1 == 'D' and s2 == 'F') {
					cout << "1";
					return 0;
				}
				if (s1 == 'B' and s2 == 'A') {
					cout << "1";
					return 0;
				} else if (s1 == 'C' and s2 == 'B') {
					cout << "1";
					return 0;
				} else if (s1 == 'F' and s2 == 'D') {
					cout << "1";
					return 0;
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