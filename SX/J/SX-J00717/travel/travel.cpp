#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, c1, s2, c2;
	cin >> c1 >> s1 >> c2 >> s2;
	int  a1 = 0, a2 = 0, p = 1, o = 1, j = 1;
	if (c1 == c2)
		cout << 1;
	else {
		p = 0;
		cout << 0;
	}
	for (int i = 0; i < 2; i++) {
		a1 = a1 * 10 + s1[i] - '0';
		a2 = a2 * 10 + s2[i] - '0';
	}
	if (a1 == a2 && p != 0)
		cout << 1;
	else {
		cout << 0;
		o = 0;
	}
	if ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'D' || s2[2] == 'E')) {
		cout << 0;
		j = 0;
	} else if ((s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') && (s1[2] == 'D' || s1[2] == 'E')) {
		cout << 0;
		j = 0;
	} else if (o == 0) {
		cout << 0;
		j = 0;
	} else {

		cout << 1;
	}
	if (j == 1 && ((s1[2] - s2[2] == 1) || (s1[2] - s2[2] == -1)))
		cout << 1;
	else
		cout << 0;
	return 0;
}