#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a = 0, b = 0, cx = 0, zp = 0, tc = 0, xl = 0;
	string za, zb;
	cin >> a >> za >> b >> zb;
	if (a == b) {
		cx = 1;
		if (za[0] == zb[0] && za[1] == zb[1]) {
			zp = 1;
			if (za[2] >= 'A' && za[2] <= 'C' && zb[2] >= 'A' && zb[2] <= 'C') {
				tc = 1;
				if (za[2] == 'B' || zb[2] == 'B')
					xl = 1;
			} else if ((za[2] == 'D' || za[2] == 'F') && (zb[2] == 'D' || zb[2] == 'F')) {
				tc = 1;
				xl = 1;
			}
		}
	}
	cout << cx << " " << zp << " " << tc << " " << xl;
	return 0;
}