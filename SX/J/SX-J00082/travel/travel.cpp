#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a1, b1, a2, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	int f = 0;

	if (a1 == b1)
		cout << "1";
	else
		cout << "0";

	if (a2[0] == b2[0] and a2[1] == b2[1] and a1 == b1)
		cout << "1";
	else
		cout << "0";

	if (a2[2] == 'D' or a2[2] == 'F' and a2[0] == b2[0] and a2[1] == b2[1] and a1 == b1) {
		if (b2[2] != 'D' and b2[2] != 'F')
			cout << "0";
		else {
			cout << "1";
			f = 1;
		}

	} else if (a2[0] == b2[0] and a2[1] == b2[1] and a1 == b1) {
		if (b2[2] == 'D' or b2[2] == 'F')
			cout << "0";
		else {
			cout << "1";
			f = 1;
		}
	} else
		cout << "0";
	if (f == 1 and a1 == b1) {
		if (a2[2] - 1 == b2[2] or a2[2] + 1 == b2[2])
			cout << "1";
		else
			cout << "0";
	} else
		cout << "0";



}
