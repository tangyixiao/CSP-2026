#include <bits/stdc++.h>
using namespace std;
string c1, c2, c3, c4;
int f1, f2, f3, f4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1 == c3) {
		f1 = 1;
		if (c2[0] == c4[0] and c2[1] == c4[1]) {
			f2 = 1;
			if (c2[2] == 'A' and c4[2] == 'B' or c2[2] == 'B' and c4[2] == 'A' or c2[2] == 'B' and c4[2] == 'C' or c2[2] == 'C'
			        and c4[2] == 'B' or c2[2] == 'D' and c4[2] == 'F' or c2[2] == 'F' and c4[2] == 'D') {
				f3 = 1, f4 = 1;
			} else {
				if ((c2[2] == 'A' or c2[2] == 'B' or c2[2] == 'C') and (c4[2] == 'A' or c4[2] == 'B' or c4[2] == 'C') or (c2[2] == 'D'
				        or c2[2] == 'F') and (c4[2] == 'D' or c4[2] == 'F')) {
					f3 = 1;
				}
			}
		}
	}
	if (f1 == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f2 == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f3 == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f4 == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}