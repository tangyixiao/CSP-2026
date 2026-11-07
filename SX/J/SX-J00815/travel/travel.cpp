#include <bits/stdc++.h>
using namespace std;
string c_1, s_1, c_2, s_2;
char seatr, seatx;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	seatr = s_1[2];
	seatx = s_2[2];
	if (seatr == 'D')
		seatr = 'E';
	if (seatx == 'D')
		seatx = 'E';
	if (c_1[0] != c_2[0] || c_1[1] != c_2[1]) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
		if (s_1[0] != s_2[0] || s_1[1] != s_2[1]) {
			cout << "000";
			return 0;
		} else {
			cout << 1;
			if ((seatr < 'D' && seatx < 'D') || (seatr > 'D' && seatx > 'D')) {
				cout << 1;
				if (abs(int(seatr) - int(seatx)) == 1)
					cout << 1;
				else
					cout << 0;
			} else {
				cout << "00";
			}
		}
	}
	return 0;
}