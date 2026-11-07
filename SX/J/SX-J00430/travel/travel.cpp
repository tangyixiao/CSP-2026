#include <bits/stdc++.h>
using namespace std;
string a;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	getline(cin, a);
	if (a[1] == a[8] && a[0] == a[7])
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (a[3] == a[10] && a[4] == a[11])
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if ((a[5] >= 'D' && a[12] <= 'C') || (a[5] <= 'C' && a[12] >= 'D')) {
		cout << "00";
		return 0;
	} else
		cout << 1;
	if (a[5] == a[12] + 1 || a[12] == a[5] + 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}