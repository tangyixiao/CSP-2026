#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	string ax, ay, bx, by;
	cin >> ax >> ay >> bx >> by;
	if (ax == bx) {
		cout << 1;
		if (ay[0] == by[0] && ay[1] == by[1]) {
			cout << 1;
			bool al = ay[2] == 'D' || ay[2] == 'E';
			bool bl = by[2] == 'D' || by[2] == 'E';
			if ((al && bl) || (!al && !bl))
				cout << 1;
			else
				cout << 0;
			if ((ay[2] == 'D' && by[2] == 'E') || (ay[2] == 'E' && by[2] == 'D') || (ay[2] == 'A' && by[2] == 'B') || (ay[2] == 'B'
			        && by[2] == 'A') || (ay[2] == 'B' && by[2] == 'C') || (ay[2] == 'C' && by[2] == 'B'))
				cout << 1;
			else
				cout << 0;
		} else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;



	return 0;
}
