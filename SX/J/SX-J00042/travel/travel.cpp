#include <bits/stdc++.h>
using namespace std;
int a, b;
string c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> c >> b >> d;
	if (a == b) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (c[0] == d[0] && c[1] == d[1] && a == b) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((c[2] == 'A' && (d[2] == 'B' || d[2] == 'C')) || (c[2] == 'B' && (d[2] == 'A' || d[2] == 'C')) || (c[2] == 'C'
	        && (d[2] == 'A' || d[2] == 'B')) ||
	        (c[2] == 'D' && d[2] == 'F') || (c[2] == 'F' && d[2] == 'D') ) {
		if (c[0] == d[0] && c[1] == d[1] && a == b) {
			cout << 1;
		} else
			cout << 0;
	} else {
		cout << 0;
	}
	if ((c[2] == 'A' && d[2] == 'B' ) || (c[2] == 'B' && (d[2] == 'A' || d[2] == 'C')) || (c[2] == 'C'
	        && d[2] == 'B')
	        || (c[2] == 'D' && d[2] == 'F') || (c[2] == 'F' && d[2] == 'D')) {
		if (c[0] == d[0] && c[1] == d[1] && a == b) {
			cout << 1;
		} else
			cout << 0;
	} else {
		cout << 0;
	}
	return 0;
}
