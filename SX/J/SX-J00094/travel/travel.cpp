#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, a1, b, b1, a3, b3;
	char a2, b2;
	cin >> a >> a1 >> a2 >> b >> b1 >> b2;
	if (a2 == 'A')
		a3 = 1;
	else if (a2 == 'B')
		a3 = 2;
	else if (a2 == 'C')
		a3 = 3;
	else if (a2 == 'D')
		a3 = 4;
	else
		a3 = 5;
	if (b2 == 'A')
		b3 = 1;
	else if (b2 == 'B')
		b3 = 2;
	else if (b2 == 'C')
		b3 = 3;
	else if (b2 == 'D')
		b3 = 4;
	else
		b3 = 5;
	if (a == b) {
		cout << 1;
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if (a1 == b1) {
		cout << 1;
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if ((a3 <= 3 && b3 <= 3) || (a3 > 3 && b3 > 3)) {
		cout << 1;
	} else {
		cout << 0;
		cout << 0;
		return 0;
	}
	if (a3 - 1 == b3 || a3 + 1 == b3) {
		cout << 1;
	} else {
		cout << 0;
		return 0;
	}
	return 0;
}
