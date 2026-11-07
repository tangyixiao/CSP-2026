#include <bits/stdc++.h>
using namespace std;
string c1, c2, x1, x2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> x1 >> c2 >> x2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (x1[0] == x2[0] and x1[1] == x2[1] and c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (((x1[2] <= 'C' and x2[2] <= 'C') or (x1[2] <= 'F' and x1[2] > 'C' and x2[2] <= 'F' and x2[2] > 'C'))
	        and x1[0] == x2[0] and x1[1] == x2[1] and c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (((x2[2] - x1[2] == 1 or x2[2] - x1[2] == -1) and x2[2] != 'D' and x2[2] != 'C' and x2[2] != 'C'
	        and x2[2] != 'D') and ((x1[2] <= 'C' and x2[2] <= 'C') or (x1[2] <= 'F' and x1[2] > 'C' and x2[2] <= 'F'
	                               and x2[2] > 'C')) and x1[0] == x2[0] and x1[1] == x2[1] and c1 == c2) {
		cout << 1;
	}
	if ((x2[2] == 'F' and x1[2] == 'D' or x2[2] == 'D' and x1[2] == 'F')) {
		cout << 1;
	} else {
		cout << 0;
	}

	return 0;
}
