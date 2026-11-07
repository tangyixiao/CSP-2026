#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
int f, t;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> a >> b >> c >> d;

	if (a == c) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (b[1] == d[1] && b[0] == d[0]) {
		if (b[2] == d[2]) {
			cout << 0;
			f = 0;
		} else {
			cout << 1;
			f = 1;
		}
	} else {
		cout << 0;
		f = 0;
	}
	if ((b[2] >= 'A' && b[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C' ) || ((b[2] == 'D' && d[2] == 'f') && (d[2] == 'D'
	        || b[2] == 'F') )) {
		if (f) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (b[2] == 'A' && d[2] == 'B' || b[2] == 'B' && d[2] == 'C' || b[2] == 'D' && d[2] == 'F') {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
//travel
