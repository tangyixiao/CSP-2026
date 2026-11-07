#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int ca, cb, pa, pb, si1, si2;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	ca = (c1[0] - '0') * 10 + (c1[1] - '0');
	cb = (c2[0] - '0') * 10 + (c2[1] - '0');
	pa = (s1[0] - '0') * 10 + (s1[1] - '0');
	pb = (s2[0] - '0') * 10 + (s2[1] - '0');
	si1 = s1[2] - 'A' + 1;
	si2 = s2[2] - 'A' + 1;
	if (ca == cb)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (pa == pb)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if (si1 <= 3 && si2 <= 3) {
		cout << 1;
		if (abs(si1 - si2) == 1)
			cout << 1;
		else
			cout << 0;
	} else if (si1 > 3 && si2 > 3) {
		cout << "11";
	} else
		cout << "00";

	return 0;
}