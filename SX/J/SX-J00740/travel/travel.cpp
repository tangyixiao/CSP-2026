#include <bits/stdc++.h>
using namespace std;
int a1, a2, b1, b2;
char a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> a2 >> a >> b1 >> b2 >> b;
	if (a == 'F')
		a = (int)(a - 1);
	else
		int an = (int)a;
	if (b == 'F')
		b = (int)(b - 1);
	else
		int bn = (int)b;
	if (a1 == b1)
		cout << 1;
	else
		cout << 0;
	if (a2 == b2 && a1 == b1)
		cout << 1;
	else
		cout << 0;
	if (a == 'D' && b == 'F')
		cout << 1;
	else if (b == 'D' && a == 'F')
		cout << 1;
	if (a == 'D' && b == 'F' || a == 'A' && b == 'B' || a == 'A' && b == 'C' || a == 'B' && b == 'A' || a == 'B'
	        && b == 'C' || a == 'C' && b == 'A' || a == 'C' && b == 'B' || a == 'A' && b == 'A' || a == 'B' && b == 'B' || a == 'C'
	        && b == 'C' || a == 'F' && b == 'D' )
		if (a2 == b2 && a1 == b1) {
			cout << 1;
		} else
			cout << 0;
	else
		cout << 0;
	if (abs(a - b) == 1 && a != 'C' && b != 'D' && a1 == b1 && a2 == b2)
		cout << 1;
	else
		cout << 0;
	return 0;
}
