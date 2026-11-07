#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;

	int ans = 0;
	if (c1 == c2 && ans == 0) {
		cout << 1;
		ans ++;
	} else
		cout << 0;

	string a, b;
	a = s1[0] + s1[1];
	b = s2[0] + s2[1];
	if (a == b && ans == 1) {
		cout << 1;
		ans ++;

	} else
		cout << 0;

	int r, x;
	if (s1[2] == 'A')
		r = 1;
	else if (s1[2] == 'B')
		r = 2;
	else if (s1[2] == 'C')
		r = 3;
	else if (s1[2] == 'D')
		r = 4;
	else if (s1[2] == 'F')
		r = 6;

	if (s2[2] == 'A')
		x = 1;
	else if (s2[2] == 'B')
		x = 2;
	else if (s2[2] == 'C')
		x = 3;
	else if (s2[2] == 'D')
		x = 4;
	else if (s2[2] == 'F')
		x = 6;
	if (((r >= 1 && r <= 3 && x >= 1 && x <= 3 ) || (((r == 4 || r == 6) && (x == 4 && x == 6 )))) && ans == 2) {
		cout << 1;
		ans ++;
	} else
		cout << 0;

	if (ans == 3 && ((int)r == int(x + 1) || r == int(x - 1))) {
		cout << 1;
	} else
		cout << 0;

	return 0;
}
