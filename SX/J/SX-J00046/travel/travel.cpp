#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int k1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int k2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	int j1 = max(s1[2] + '0', s2[2] + '0');
	int j2 = min(s1[2] + '0', s2[2] + '0');
	if (c1 == c2) {
		cout << "1";
		if (k1 == k2) {
			cout << "1";
			if (j1 - j2 <= 3 && j1 != 116) {
				cout << "1";
				if (j1 - j2 == 1) {
					cout << "1";
				} else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;

}
