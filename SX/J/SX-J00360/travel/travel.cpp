#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	long long a, b;
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')
		a = 1;
	else
		a = 2;
	if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')
		b = 1;
	else
		b = 2;
	if (c1 != c2) {
		cout << "0000";
	} else {
		cout << '1';
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << '1';
			if (a == b) {
				cout << '1';
				if (a == 2 && b == 2)
					cout << '1';
				else if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C'))
					cout << '1';
				else
					cout << '0';

			} else {
				cout << "00";
			}

		} else
			cout << "000";
	}
	return 0;
}