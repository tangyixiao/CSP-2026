#include <bits/stdc++.h>
using namespace std;
string s1, s2, a3, b3, a1, b1, a2, b2;
int c1, c2;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;

	a1 = s1[0];
	a2 = s1[1];
	a3 = s1[2];
	b1 = s2[0];
	b2 = s2[1];
	b3 = s2[2];
	if (c1 == c2) { //Q1
		cout << 1;
		if (a1 == b1 and a2 == b2) { //Q2
			cout << 1;
			if ((a3 == "A" and b3 == "B") or (a3 == "A" and b3 == "C") or (a3 == "D" and b3 == "F") or (a3 == "B" and b3 == "C")
			        or (b3 == "A" and a3 == "C") or (b3 == "A" and a3 == "B") or (b3 == "B" and a3 == "C") or (b3 == "D" and a3 == "F")) {
				cout << 1;

			} else {
				cout << 0;
			}
			if ((a3 == "A" and b3 == "B")  or (a3 == "D" and b3 == "F") or (a3 == "B" and b3 == "C")
			        or (b3 == "A" and a3 == "B") or (b3 == "B" and a3 == "C") or (b3 == "D" and a3 == "F")) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}

	return 0;
}
