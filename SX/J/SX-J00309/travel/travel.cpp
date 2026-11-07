#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	int a1, b1, c1, a2, b2, c2;
	cin >> a >> b >> c >> d;
	if (a[0] == '0')
		a1 = a[1] - '0';
	else
		a1 = a[1] - '0' + 10;
	if (c[0] == '0')
		a2 = c[1] - '0';
	else
		a2 = c[1] - '0' + 10;
	if (b[0] == '0')
		b1 = b[1] - '0';
	else
		b1 = b[1] - '0' + 10;
	if (d[0] == '0')
		b2 = d[1] - '0';
	else
		b2 = d[1] - '0' + 10;
	c1 = b[2] - 'A' + 1;
	c2 = d[2] - 'A' + 1;
	if (c1 == 6)
		c1 = 5;
	if (c2 == 6)
		c2 = 5;
	if (a1 == a2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (b1 == b2)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	int m = c1 + c2;
	if ((m <= 5 && abs(c1 - c2) != 3) || m == 9)
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if (abs(c1 - c2) == 1)
		cout << 1;
	else
		cout << 0;



	return 0;
}
