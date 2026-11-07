#include <bits/stdc++.h>
using namespace std;
string a, b, c, d, m, n;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	m = (b[0] - '0') * 10 + b[1];
	n = (d[0] - '0') * 10 + d[1];
	if (a == c)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (m == n)
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if ((b[2] >= 'D' && d[2] >= 'D' ) || (b[2] <= 'C' && d[2] <= 'C'))
		cout << "1";
	else {
		cout << "00";
		return 0;
	}
	if (abs(b[2] - d[2]) > 1 || (b[2] == 'C' && d[2] == 'D' ) || (b[2] == 'D' && d[2] == 'C'))
		cout << "0";
	else
		cout << "1";
	return 0;
}