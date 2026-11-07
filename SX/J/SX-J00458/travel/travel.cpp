#include <bits/stdc++.h>
using namespace std;
bool a, b, c, d;
int x, y;
char m, n;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string cc, ss, ccc, sss;
	cin >> cc >> ss >> ccc >> sss;
	x = (ss[0] - '0') * 10 + ss[1] - '0';
	y = (sss[0] - '0') * 10 + sss[1] - '0';
	m = ss[2];
	n = sss[2];
	if (cc != ccc) {
		cout << "0000";
		return 0;
	} else
		a = 1;
	if (x == y) {
		b = 1;
		if (m <= 'C' && n <= 'C') {
			c = 1;
			d = 1;
			if ((m == 'A' && n == 'C') || (m == 'C' && n == 'A'))
				d = 0;
		}
		if (m >= 'D' && n >= 'D') {
			c = 1;
			d = 1;
		}
	}
	cout << a << b << c << d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}