//travel
#include <bits/stdc++.h>
using namespace std;
int c1, s1, c2, s2, flag;
char s_1, s_2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> s_1 >> c2 >> s2 >> s_2;
	flag = max(s_1, s_2) - min(s_1, s_2);
	if (c1 == c2) {
		cout << "1";
		if (s1 == s2) {
			cout << "1";
			if (s_1 == 'A' || s_1 == 'B' || s_1 == 'C') {
				if (s_2 == 'A' || s_2 == 'B' || s_2 == 'C') {
					cout << "1";
					if (flag == 1) {
						cout << "1";
					} else {
						cout << '0';
					}
				}
			}
			if (s_1 == 'D' || s_1 == 'F') {
				if (s_2 == 'D' || s_2 == 'F') {
					cout << "1";
					if (flag == 1) {
						cout << "1";
					} else {
						cout << '0';
					}
				}
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
