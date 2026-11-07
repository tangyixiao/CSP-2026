#include <bits/stdc++.h>
using namespace std;

string rc, rz, xc, xz; //小r，小x的车厢，座位

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rc >> rz >> xc >> xz;
	if (rc == xc) {
		//同车厢
		cout << 1;
		if (rz[0] == xz[0] && rz[1] == xz[1]) {
			//同排
			cout << 1;
			if ((rz[2] <= 'C' && xz[2] <= 'C') || (rz[2] >= 'D' && xz[2] >= 'D')) {
				//同侧
				cout << 1;
				if ((rz[2] + 1 == xz[2]) || (xz[2] + 1 == rz[2])) { //相邻
					cout << 1;
				} else
					cout << 0;
			} else {
				cout << "00";
			}
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}