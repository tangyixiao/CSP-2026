#include <bits/stdc++.h>
using namespace std;

bool samepai(string a, string b) {
	return a[1] == b[1] && a[0] == b[0];
}

bool samece(string a, string b, bool c) {
	if (a[2] == 'A' && b[2] == 'B')
		return true;
	if (a[2] == 'A' && b[2] == 'C' && c)
		return true;
	if (a[2] == 'B' && b[2] == 'A')
		return true;
	if (a[2] == 'B' && b[2] == 'C')
		return true;
	if (a[2] == 'C' && b[2] == 'A' && c)
		return true;
	if (a[2] == 'C' && b[2] == 'B')
		return true;

	if (a[2] == 'F' && b[2] == 'D')
		return true;
	if (a[2] == 'D' && b[2] == 'F')
		return true;
	return false;
}


int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string cx, sx, cy, sy;
	cin >> cx >> sx >> cy >> sy;
	int a = 0, b = 0, c = 0, d = 0;
	if (cx == cy)
		a = 1;
	if (a && samepai(sx, sy))
		b = 1;
	if (b && samece(sx, sy, true))
		c = 1;
	if (c && samece(sx, sy, false))
		d = 1;
	cout << a << b << c << d;

	return 0;
}
