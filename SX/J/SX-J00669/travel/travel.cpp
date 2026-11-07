#include <bits/stdc++.h>
using namespace std;
string rx, rz, xx, xz, num;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rx >> rz >> xx >> xz;
	if (rx == xx) {
		num += '1';
	} else {
		num += '0';
	}
	if (num[0] == '0') {
		num += '0';
	} else {
		if (rz[0] == xz[0] && rz[1] == xz[1]) {
			num += '1';
		} else {
			num += '0';
		}
	}
	int sr = rz[2] - 'A' + 1;
	int sx = xz[2] - 'A' + 1;
	if (num[1] == '0') {
		num += '0';
	} else {
		if ((sr <= 3 && sx <= 3) || (sr > 3 && sx > 3)) {
			num += '1';
		} else {
			num += '0';
		}
	}
	if (sr - sx == 1 || sx - sr == 1) {
		if (num[2] == '1')
			num += '1';
		else
			num += '0';
	} else {
		num += '0';
	}
	cout << num;
	return 0;
}