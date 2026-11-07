#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int rs, xs;
string r, x;
bool f1, f2, f3, f4, rc, xc;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rs >> r >> xs >> x;
	if (r[2] == 'C' || (r[2] == 'B' || r[2] == 'A')) {
		rc = 1;
	}
	if (x[2] == 'C' || (x[2] == 'B' || x[2] == 'A')) {
		xc = 1;
	}
	if (rs == xs) {
		f1 = 1;
	}
	if (f1 == 1 && (r[0] == x[0] && r[1] == x[1])) {
		f2 = 1;
	}
	if (f2 == 1 && xc == rc) {
		f3 = 1;
	}
	if (f3 == 1 && abs(r[2] - x[2]) == 1) {
		f4 = 1;
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}
