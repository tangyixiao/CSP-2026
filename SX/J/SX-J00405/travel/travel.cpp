#include <bits/stdc++.h>
using namespace std;
string a, a1, b, b1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> a1 >> b >> b1;
	if (a == b) {
		cout << 1;
		if (a1[0] == b1[0] and a1[1] == b1[1]) {
			cout << 1;
			if ((a1[2] == 'D' and b1[2] == 'F') or (a1[2] == 'F' and b1[2] == 'D') or (a1[2] == 'A' and b1[2] == 'B')
			        or (a1[2] == 'A' and b1[2] == 'C') or (a1[2] == 'B' and b1[2] == 'A') or (a1[2] == 'B' and b1[2] == 'C')
			        or (a1[2] == 'C' and b1[2] == 'B') or (a1[2] == 'C' and b1[2] == 'A')) {
				cout << 1;
				if ((a1[2] == 'D' and b1[2] == 'F') or (a1[2] == 'F' and b1[2] == 'D') or (a1[2] == 'A' and b1[2] == 'B')
				        or (a1[2] == 'B' and b1[2] == 'A') or (a1[2] == 'B' and b1[2] == 'C') or (a1[2] == 'C' and b1[2] == 'B')) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;

	}






	return 0;
}
