#include"bits/stdc++.h"
using namespace std;
string c1, s1, c2, s2;
int r1, l1, r2, l2;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	cin >> c1 >> s1 >> c2 >> s2;
	r1 = (s1[0] - '0') * 10 + s1[1] - '0';
	l1 = min(s1[2] - 'A' + 1, 5);
	r2 = (s2[0] - '0') * 10 + s2[1] - '0';
	l2 = min(s2[2] - 'A' + 1, 5);
	if (c1 == c2) {
		cout << 1;
		if (r1 == r2) {
			cout << 1;
			if ((l1 < 4) == (l2 < 4)) {
				cout << 1;
				if (abs(l1 - l2) == 1)
					cout << 1;
				else
					cout << 0;
			}
			else
				cout << "00";
		}
		else
			cout << "000";
	}
	else
		cout << "0000";
	return 0;
}