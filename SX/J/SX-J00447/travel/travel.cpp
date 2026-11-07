#include <bits/stdc++.h>
using namespace std;
string st1, st2, st3, st4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> st1 >> st2 >> st3 >> st4;
	if (st1 == st3) {
		cout << 1;
		if (st2[0] == st4[0] && st2[1] == st4[1]) {
			cout << 1;
			if ((st2[2] == 'F' && st4[2] == 'D') || (st2[2] == 'D' && st4[2] == 'F'))
				cout << 1 << 1;
			else if ((st2[2] == 'A' && st4[2] == 'B') || (st2[2] == 'B' && st4[2] == 'A'))
				cout << 1 << 1;
			else if ((st2[2] == 'A' && st4[2] == 'C') || (st2[2] == 'C' && st4[2] == 'A'))
				cout << 1 << 0;
			else if ((st2[2] == 'C' && st4[2] == 'B') || (st2[2] == 'B' && st4[2] == 'C'))
				cout << 1 << 1;
			else
				cout << 0 << 0;
		} else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;
	return 0;
}
