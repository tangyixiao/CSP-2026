#include <bits/stdc++.h>
using namespace std;
string cr, sr, cx, sx;
char k[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> cr >> sr >> cx >> sx;
	int cR = ((cr[0] - '0') * 10) + (cr[1] - '0'), sR = ((sr[0] - '0') * 10) + (sr[1] - '0');
	int cX = ((cx[0] - '0') * 10) + (cx[1] - '0'), sX = ((sx[0] - '0') * 10) + (sx[1] - '0');
	bool flag = 1;
	if (cR == cX) {
		if (sR == sX) {
			k[1] = k[2] = '1';
		} else {
			k[1] = '1';
			k[2] = k[3] = k[4] = '0';
			flag = 0;
		}
	} else {
		k[1] = k[2] = k[3] = k[4] = '0';
		flag = 0;
	}
	if (flag == 1) {
		if (sr[2] == 'A') {
			if (sx[2] == 'B') {
				k[3] = '1';
				k[4] = '1';
			} else if (sx[2] == 'C') {
				k[3] = '1';
				k[4] = '0';
			} else {
				k[3] = '0';
				k[4] = '0';
			}
		} else if (sr[2] == 'B') {
			if (sx[2] == 'A') {
				k[3] = '1';
				k[4] = '1';
			} else if (sx[2] == 'C') {
				k[3] = '1';
				k[4] = '1';
			} else {
				k[3] = '0';
				k[4] = '0';
			}
		}
		if (sr[2] == 'C') {
			if (sx[2] == 'A') {
				k[3] = '1';
				k[4] = '0';
			} else if (sx[2] == 'B') {
				k[3] = '1';
				k[4] = '1';
			} else {
				k[3] = '0';
				k[4] = '0';
			}
		}
		if (sr[2] == 'D') {
			if (sx[2] == 'F') {
				k[3] = '1';
				k[4] = '1';
			} else {
				k[3] = '0';
				k[4] = '0';
			}
		}
		if (sr[2] == 'F') {
			if (sx[2] == 'D') {
				k[3] = '1';
				k[4] = '1';
			} else {
				k[3] = '0';
				k[4] = '0';
			}
		}
	}
	for (int i = 1; i <= 4; i++) {
		cout << k[i];
	}
	return 0;
}