#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string rc, rs, xc, xs;
	cin >> rc >> rs >> xc >> xs;
	if (rc != xc) {
		cout << "0000";
	} else if (rs[0] != xs[0] || rs[1] != xs[1]) {
		cout << 1000;
	} else if (((rs[2] == 'A' || rs[2] == 'B' || rs[2] == 'C') &&
	            (xs[2] == 'D' || xs[2] == 'F')) ||
	           ((rs[2] == 'D' || rs[2] == 'F') &&
	            (xs[2] == 'A' || xs[2] == 'B' || xs[2] == 'C'))) {
		cout << 1100;
	} else if ((rs[2] == 'A' || rs[2] == 'C') &&
	           (xs[2] == 'A' || xs[2] == 'C')) {
		cout << 1110;
	} else {
		cout << 1111;
	}
	return 0;
}