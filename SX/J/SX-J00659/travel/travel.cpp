#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, c, b, d;
	cin >> a;//a R车厢，b R座位，c X车厢，d X座位。
	cin >> b;
	cin >> c;
	cin >> d;
	//int q = 0, w = 0, e = 0, r = 0;
	if (a == c) {
		cout << "1";
		if (b[0] == d[0] && b[1] == d[1]) {
			cout << "111";
			return 0;
			/*if ((b[2] == 'A' || b[2] == 'B' || b[2] == 'C') && (c[2] == 'A' || c[2] == 'B' || c[2] == 'C')) {
				e = 1;
				if (b[2] == 'B' || d[2] == 'B') {
					r = 1;
				}
			} else if (c[2] == 'D' || c[2] == 'F') {
				e = 1;
				r = 1;
			} else {
				cout << q << w << e << r;
				return 0;
			}
			return 0;
			}*/
		}
		cout << "000";
		return 0;
	}
	cout << "0000";
	//cout << q << w << e << r;
	return 0;
}