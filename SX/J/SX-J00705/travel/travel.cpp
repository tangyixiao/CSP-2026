#include <bits/stdc++.h>
using namespace std;
string chea, seata, cheb, seatb;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> chea >> seata >> cheb >> seatb;
	for (int i = 0; i <= 1 ; i++) {
		if (cheb[i] != chea[i]) {
			cout << "0000";
			return 0;
		}
	}
	if (seatb[1] != seata[1] || seatb[0] != seata[0]) {
		cout << "1000";
		return 0;
	}
	if ((seata[2] > seatb[2] && seata[2] - seatb[2] > 1) || (seatb[2] > seata[2] && seatb[2] - seata[2] > 1)) {
		if ((seata[2] || seatb[2] == 'A') && (seata[2] || seatb[2] == 'C')) {
			cout << "1110";
			return 0;
		} else {
			cout << "1100";
			return 0;
		}
	} else {
		if ((seata[2] != 'C' && seatb[2] != 'D') && (seata[2] != 'D' && seatb[2] != 'C')) {
			cout << "1111";
		} else {
			cout << "1100";
		}
	}
	return 0;
}
