#include <bits/stdc++.h>
using namespace std;
string rc, rs, xc, xs;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> rc >> rs >> xc >> xs;
	
	if (rc[0] == xc[0] && rc[1] == xc[1]) {
		cout << "1";
	} else {
		cout << "0000" << endl;
		return 0;
	}
	
	if (rs[0] == xs[0] && rs[1] == xs[1]) {
		cout << "1";
	} else {
		cout << "000" << endl;
		return 0;
	}
	
	if (rs[2] >= 'A' && rs[2] <= 'C' && xs[2] >= 'A' && xs[2] <= 'C') {
		cout << "1";
	} else if ((rs[2] == 'D' || rs[2] == 'F') && (xs[2] == 'D' || xs[2] == 'F')) {
		cout << "1";
	} else {
		cout << "00" << endl;
		return 0;
	}
	
	int Rs = rs[2] - 'A', Xs = xs[2] - 'A';
	if (rs[2] >= 'A' && rs[2] <= 'C' && (Rs - Xs == 1 || Xs - Rs == 1)) {
		cout << "1" << endl;
	} else if (rs[2] == 'D' || rs[2] == 'F') {
		cout << "1" << endl;	
	} else {
		cout << "0" << endl;
	}
	
	return 0;
}
