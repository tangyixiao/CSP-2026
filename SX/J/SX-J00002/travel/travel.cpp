#include <bits/stdc++.h>
using namespace std;
string rc, rs, xc, xs;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rc >> rs >> xc >> xs;
	int pans = 0;
	int zans = 0;
	int cans = 0;
	int gans = 1;
	string rp;
	string xp;

	if (rc == xc) {
		cans = 1;
		for (int i = 1; i <= 3; i++) {
			if (rs[i] <= '9' && rs[i] >= '0' && xs[i] <= '9' && xs[i] >= '0') {
				rp += rs[i];
				xp += xs[i];
				if (rp == xp) {
					pans = 1;
				}
			} else {
				if ((rs[i] == 'D' && xs[i] == 'C') || (rs[i] == 'C' && xs[i] == 'D')) {
					gans = 0;
				} else {
					int n = rs[i] - xs[i];
					int m = xs[i] - rs[i];
					if (((n == 1) || (m == 1)) && gans == 1) {
						zans = 1;
					}
				}
			}
		}
	} else {
		gans = 0;
	}
	cout << cans << pans << gans << zans;
	return 0;
}
