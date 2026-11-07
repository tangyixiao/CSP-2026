#include <bits/stdc++.h>
using namespace std;
string a1, b1, a2, b2;
char a[10], b[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2)
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}

	a[1] = b1[1];
	a[2] = b1[2];
	b[1] = b2[1];
	b[2] = b2[2];
	a[3] = b1[0];
	b[3] = b2[0];
	if (a[1] == b[1] && a[3] == b[3])
		cout << 1;
	else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if (a[2] == 'A' && b[2] == 'B' || a[2] == 'B' && b[2] == 'A' || a[2] == 'A' && b[2] == 'C' || a[2] == 'C'
	        && b[2] == 'B' || a[2] == 'C' && b[2] == 'A' || a[2] == 'B' && b[2] == 'C' ||
	        a[2] == 'D' && b[2] == 'F' || a[2] == 'F' && b[2] == 'D')
		cout << 1;
	else {
		cout << 0 << 0;
		return 0;
	}
	if (a[2] == 'A' && b[2] == 'B' || a[2] == 'B' && b[2] == 'A' || a[2] == 'C' && b[2] == 'B' || a[2] == 'B'
	        && b[2] == 'C' ||
	        a[2] == 'D' && b[2] == 'F' || a[2] == 'F' && b[2] == 'D')
		cout << 1;
	else {
		cout << 0;
	}

	return 0;
}