#include <bits/stdc++.h>
using namespace std;
bool f1, f2, f3;
int a, c, b1, d1;
string b, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << 1;
		f1 = 1;
	} else
		cout << 0;
	b1 = int(b[0]) * 10 + int(b[1]);
	d1 = int(d[0]) * 10 + int(d[1]);
	if (b1 == d1 && f1 == 1) {
		cout << 1;
		f2 = 1;
	} else
		cout << 0;
	if ((b[2] >= 'D' && d[2] >= 'D' && f2 == 1 ) || (b[2] <= 'C' && d[2] <= 'C' && f2 == 1) ) {
		cout << 1;
		f3 = 1;
	} else
		cout << 0;
	if (f3 == 1 && abs(int(b[2] ) - int(d[2]) ) == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}