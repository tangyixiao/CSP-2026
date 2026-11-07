#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	char x = b[0] + b[1];
	char y = d[0] + d[1];
	char z = b[2];
	char q = d[2];
	if (a == c) {
		if (x == y) {
			if ((z <= 'C' && q <= 'C') || (z > 'C' && q > 'C')) {
				if ((z == 'A' && q == 'C') || (z == 'C' && q == 'A'))
					cout << "1110";
				else
					cout << "1111";
			} else
				cout << "1100";
		} else
			cout << "1000";
	} else
		cout << "0000";
	return 0;
}