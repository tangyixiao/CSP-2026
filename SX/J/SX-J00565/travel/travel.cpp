#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	int aa, bb, cc, dd;
	cin >> a >> b >> c >> d;
	if (a == c)
		aa = 1;
	else
		aa = 0;
	if (b[0] == d[0] && b[1] == d[1] && aa == 1)
		bb = 1;
	else
		bb = 0;
	if ((b[2] <= 'C' && d[2] <= 'C' && bb == 1) || (b[2] >= 'D' && d[2] >= 'D' && bb == 1))
		cc = 1;
	else
		cc = 0;
	if ((b[2] == d[2] + 1 || d[2] == b[2] + 1) && cc == 1)
		dd = 1;
	else
		dd = 0;
	cout << aa << bb << cc << dd << endl;
	return 0;
}
