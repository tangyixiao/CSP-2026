#include <bits/stdc++.h>
using namespace std;
long long a, b, d, e;
char c, f;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d >> e >> f;
	if (c == 'F')
		c--;
	if (f == 'F')
		f--;
	if (a != d) {
		cout << "0000";
	} else {
		cout << 1;
		if (b != e) {
			cout << "000";
		} else {
			cout << 1;
			if (c <= 'C' && f <= 'C' || c >= 'D' && c >= 'D') {
				cout << 1;
				if (abs(int(c) - int(f)) != 1)
					cout << "0";

				else {
					cout << 1;
				}
			} else {
				cout << "00";

			}
		}


	}





	return 0;
}
