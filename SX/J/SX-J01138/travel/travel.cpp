#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "r", stdout);
	int rcx, xcx, r[2], x[2];
	string rzwh, xzwh;
	memset(r, 99, sizeof(r));
	memset(x, 99, sizeof(x));
	cin >> rcx ;
	cin >> rzwh ;
	cin >> xcx ;
	cin >> xzwh;
	r[0] = rzwh[0] - '0';
	r[1] = rzwh[1] - '0';
	x[0] = xzwh[0] - '0';
	x[1] = xzwh[1] - '0';
	if (rcx == xcx) {
		cout << 1 ;
		if (r[0] == x[0] && r[1] == x[1]) {
			cout << 1 ;
			if ((rzwh[2] >= 'A' && rzwh[2] <= 'C' && xzwh[2] >= 'A' && xzwh[2] <= 'C') || (rzwh[2] >= 'D' && rzwh[2] <= 'F'
			        && xzwh[2] >= 'D' && xzwh[2] <= 'F')) {
				cout << 1 ;
				if (rzwh[2] + 1 == int(xzwh[2]) || rzwh[2] - 1 == int(xzwh[2])) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0;
				cout << 0;
			}
		} else {
			cout << 0;
			cout << 0;
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
	}

	return 0;
}
