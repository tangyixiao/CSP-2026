#include <bits/stdc++.h>
using namespace std;


int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char a, s, d, f, g, h;
	int x, z;
	cin >> x >> a >> s >> d >> z >> f >> g >> h;
	if (x == z)
		cout << '1';
	else {
		cout << "0000";
		return 0;
	}
	if (s == g)
		cout << '1';
	else {

		cout << "000";
		return 0;
	}
	if (d == 'D' or d == 'C' and h == 'D' or h == 'C') {
		cout << "00";
		return 0;
	} else
		cout << '1';

	if (d + 1 == h + 0 or d - 1 == h + 0)
		cout << '1';
	else
		cout << '0';


	return 0;
}
