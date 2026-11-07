#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	int a, b, c, d;
	char n, m;
	cin >> a >> b >> n >> c >> d >> m;
	if (a == c) {
		cout << "1";
		if (b == d) {
			cout << "1";
			if ((n <= 'C' && m <= 'C') || (n >= 'D' && m >= 'D')) {
				cout << "1";
				if (abs(n - m) == 1) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else
		cout << "0000";


	return 0;
}
