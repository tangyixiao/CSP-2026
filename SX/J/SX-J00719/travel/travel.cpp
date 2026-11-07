#include <bits/stdc++.h>
using namespace std;

bool check1(string a, string b) {
	return ((a[2] == 'A' || a[2] == 'B' || a[2] == 'C') && (b[2] == 'A' || b[2] == 'B' || b[2] == 'C')) ||
	       ((a[2] == 'D' || a[2] == 'F') && (b[2] == 'D' || b[2] == 'F'));
}

bool check2(string a, string b) {
	int ax = a[2], bx = b[2];
	if ((ax == 67 && bx == 68) || (ax == 68 && bx == 67))
		return 0;
	if ((ax == 70 && bx == 68) || (ax == 68 && bx == 70))
		return 1;
	if (abs(ax - bx) == 1)
		return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (check1(s1, s2)) {
				cout << 1;
				if (check2(s1, s2))
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
