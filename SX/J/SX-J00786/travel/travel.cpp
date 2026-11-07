#include <bits/stdc++.h>
using namespace std;
int c1, c2, c, d;
string a, b, s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << '1';
	else {
		cout << "0000";
		return 0;
	}

	for (int i = 0; i < 2; i++) {
		a += s1[i];
		b += s2[i];
	}
	c = ((s1[0] - '0') * 10 + (s1[1] - '0'));
	d = ((s2[0] - '0') * 10 + (s2[1] - '0'));
	if (c == d)
		cout << '1';
	else {
		cout << "000";
		return 0;
	}


	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
		if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') {
			cout << '1';
		} else {
			cout << "00";
			return 0;
		}
	} else {
		if (s2[2] == 'D' || s2[2] == 'E') {
			cout << '1';
		} else {
			cout << "00";
			return 0;
		}
	}
	if (c == d) {
		if (s1[2] == 'A' || s1[2] == 'C') {
			if (s2[2] == 'B')
				cout << '1';
			else
				cout << '0';
		} else if (s1[2] == 'B') {
			if (s2[2] == 'A' || s2[2] == 'C')
				cout << '1';
			else
				cout << '0';
		}
		if (s1[2] == 'D') {
			if (s2[2] == 'E')
				cout << '1';
			else
				cout << '0';
		}
		if (s1[2] == 'E') {
			if (s2[2] == 'D')
				cout << '1';
			else
				cout << '0';
		}
	}
	return 0;
}
