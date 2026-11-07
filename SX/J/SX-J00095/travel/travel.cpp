#include <bits/stdc++.h>
using namespace std;
string a, b, a2, b2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> a >> b >> a2 >> b2;
	int ap = ((b[0] - '0') * 10 + b[1] - '0' ) ;
	int bp = ((b2[0] - '0') * 10 + b2[1] - '0' ) ;
	char ac = b[2], bc = b2[2];
	int same = 0;
	int tp = 0;
	if (a == a2) {
		cout << 1;
		same = 1;
	} else {
		cout << 0;
		same = 0;

	}
	if (ap == bp) {

		if (same) {
			cout << 1;
			tp = 1;
		} else
			cout << 0;

	} else
		cout << 0;



	same = 0;

	if (ac <= 'C' && ac >= 'A' && bc <= 'C' && bc >= 'A') {
		if (tp) {
			cout << 1;
			same = 1;
		} else
			cout << 0;
	} else if (ac >= 'F' && ac >= 'D' && bc <= 'F' && bc >= 'D') {
		if (tp) {
			cout << 1;
			same = 1;
		} else
			cout << 0;
	} else
		cout << 0;



	if (ac + 1 == bc || ac - 1 == bc) {
		if (same)
			cout << 1;
		else
			cout << 0;
	}

	else
		cout << 0;

	return 0;
}
