#include <bits/stdc++.h>
using namespace std;
string a, a1, b, b1;
bool f, f1 = 0, f2 = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> a1 >> b >> b1;
	if (a[0] == b[0] && a[1] == b[1]) {
		cout << 1;
		f = 1;
	} else
		cout << 0;

	if ((a1[0] == b1[0] && a1[1] == b1[1]) && f == 1) {
		cout << 1;
		f1 = 1;
	} else
		cout << 0 ;

	if (f1 == 1 && f == 1 && ((a1[2] <= 'C' && b1[2] <= 'C') || (a1[2] >= 'D' && b1[2] >= 'D'))) {
		cout << 1;
		f2 = 1;
	} else
		cout << 0;

	if ((a1[2] + 1 == b1[2] || a1[2] - 1 == b1[2]) && f == 1 && f2 == 1 && f1 == 1)
		cout << 1;
	else
		cout << 0;

	return 0;
}
