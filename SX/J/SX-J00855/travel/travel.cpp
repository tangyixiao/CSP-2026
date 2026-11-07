#include <bits/stdc++.h>
using namespace std;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	string x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2) {
		cout << "1";
		if (y1[0] == y2[0] && y1[1] == y2[1]) {
			cout << "1";
			if ((y1[2] <= 'C' && y2[2] <= 'C') || (y1[2] >= 'D' && y2[2] >= 'D')) {
				cout << "1";
				if (abs(y1[2] - y2[2]) == 1)
					cout << "1";
				else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";

	return 0;
}