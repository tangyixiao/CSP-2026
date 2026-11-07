#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen ("travel.in", "r" stdin);
	freopen ("travel.out", "w" stdout);

	int c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;

	if (c1 == c2)
		cout << 1;
	else
		cout << 0;

	int a1 = s1 / 10, a2 = s1 % 10, b1 = s2 / 10, b2 = s2 % 10;

	if (a1 == b1)
		cout << 1;
	else
		cout << 0;

	if ((a2 == 'A' || a2 == 'B' || a2 == 'c') && (b2 == 'A' || b2 == 'B' || b2 == 'C') || (a2 == 'D' || a2 == 'F')
	        && (b2 == 'D' || b2 == 'F'))
		cout << 1;

	else
		cout << 0;

	if ((a2 == 'A'  && b2 == 'B') || (a2 == 'B' && b2 == 'A') || (a2 == 'B' && b2 == 'C') || (a2 == 'C' && b2 == 'B')
	        || (a2 == 'D' && a2 == 'F') || (a2 == 'F' && a2 == 'D'))
		cout << 1;
	else
		cout << 0;
	return 0;
}
