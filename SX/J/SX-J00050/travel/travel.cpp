#include <bits/stdc++.h>
using namespace std;

int c1, c2, a1, a2;
string s1, s2;
char q1, q2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		a1 = (s1[0] - '0') * 10 + s1[1] - '0';
		a2 = (s2[0] - '0') * 10 + s2[1] - '0';
		if (a1 == a2) {
			cout << 1;
			q1 = s1[2];
			q2 = s2[2];
			if (q1 == 'A' && (q2 == 'B' || q2 == 'C') || q1 == 'B' && (q2 == 'A' || q2 == 'C') || q1 == 'C' && (q2 == 'B'
			        || q2 == 'A') ||
			        q1 == 'D' && q2 == 'F' || q1 == 'F' && q2 == 'D') {
				cout << 1;
				if (q1 == 'A' && q2 == 'B' || q1 == 'B' && q2 == 'A' ||
				        q1 == 'B' && q2 == 'C' || q1 == 'C' && q2 == 'B' || q1 == 'D' && q2 == 'F' || q1 == 'F' && q2 == 'D') {
					cout << 1;
				} else {
					cout << 0;
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