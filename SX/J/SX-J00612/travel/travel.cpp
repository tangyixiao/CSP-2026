#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int n[5] = {0, 0, 0, 0, 0};
	string b, d;
	int a, c;
	cin >> a >> b >> c >> d;
	if (a == c) {
		n[1] = 1;
	}
	if ((b[0] == d[0] &&  b[1] == d[1]) && n[1] == 1) {
		n[2] = 1;
	}
	if ((b[2] == 'A' || b[2] == 'B' || b[2] == 'C') && n[2] == 1) {
		if ((d[2] == 'A' || d[2] == 'B' || d[2] == 'C') && n[2] == 1) {
			n[3] = 1;
		}
	} else if ((b[2] == 'D' || b[2] == 'F') && n[2] == 1) {
		if ((d[2] == 'D' || d[2] == 'F') && n[2] == 1) {
			n[3] = 1;
		}
	}
	if (n[3] == 1) {
		if (b[2] == 'A') {
			if (d[2] == 'B') {
				n[4] = 1;
			}
		} else if (b[2] == 'B') {
			if (d[2] == 'A' || d[2] == 'C') {
				n[4] = 1;
			}
		} else if (b[2] == 'C') {
			if (d[2] == 'B') {
				n[4] = 1;
			}
		} else {
			n[4] = 1;
		}
	}
	cout << n[1] << n[2] << n[3] << n[4];
	return 0;
}
