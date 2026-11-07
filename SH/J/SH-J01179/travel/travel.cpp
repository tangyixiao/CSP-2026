#include <bits/stdc++.h>
using namespace std;
int x, y, sx, sy;
string s1, s2;
int main() {
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	cin >> x >> s1 >> y >> s2;
	sx = (s1[0] - '0') * 10 + s1[1] - '0';
	sy = (s2[0] - '0') * 10 + s2[1] - '0';
	if (x == y) {
		cout << 1;
		if (sx == sy) {
			cout << 1;
			if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s1[2] == 'D' || s1[2] == 'E') && (s2[2] == 'D' || s2[2] == 'E'))) {
				cout << 1;
				if (char(s1[2] + 1) == s2[2] || char(s1[2] - 1) == s2[2]) {
					cout << 1;
				} else {
					cout << 0;
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
	} else {
		cout << "0000";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
    return 0;
}

