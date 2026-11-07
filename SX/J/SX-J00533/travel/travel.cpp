#include <iostream>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string x, a, b, c, d;
	x[0] = '0';
	x[1] = '0';
	x[2] = '0';
	x[3] = '0';
	cin >> a >> b >> c >> d;
	if (a == c) {
		x[0] = '1';
		if (b[0] == d[0] && b[1] == d[1]) {
			x[1] = '1';

			if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
				if (d[2] == 'A' || d[2] == 'B' || d[2] == 'C') {
					x[2] = '1';
					if (b[2] + 1 == d[2] || d[2] + 1 == b[2]) {
						x[3] = '1';
					}
				}
				if (b[2] == 'D' || b[2] == 'F') {
					if (d[2] == 'D' || d[2] == 'F') {
						x[2] = 1;
						if (b[2] + 1 == d[2] || d[2] + 1 == b[2]) {
							x[3] = '1';
						}
					}
				}
			}
		}
	}
	cout << x[0] << x[1] << x[2] << x[3];
	return 0;
}

