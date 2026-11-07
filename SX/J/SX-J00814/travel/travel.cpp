#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		string n = "", m = "";
		n = n + s1[0] + s1[1];
		m = m + s2[0] + s2[1];
		if (n == m) {
			cout << 1;
			int a = s1[2] - 'A', b = s2[2] - 'A';
			if ((a < 3 and b < 3) or (a >= 3 and b >= 3)) {
				cout << 1;
				if (b < a) {
					int c = a;
					a = b;
					b = c;
				}
				if ((b < 3 and b - a == 1) or (a >= 3 and b - a == 2)) {
					cout << 1;
				} else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
