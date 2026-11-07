#include <bits/stdc++.h>
using namespace std;
string a, b, c, d, aa, bb;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	aa = b[0] + b[1];
	bb = d[0] + d[1];
	if (aa == bb)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}

	if (b[2] < 'D' && d[2] < 'D' || b[2] >= 'D' && d[2] >= 'D')
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	char x = b[2], y = d[2];
	if (x > y)
		swap(x, y);
	if (x == 'A' && y == 'B' || x == 'B' && y == 'C' || x == 'D' && y == 'F')
		cout << 1;
	else
		cout << 0;
	return 0;
}
