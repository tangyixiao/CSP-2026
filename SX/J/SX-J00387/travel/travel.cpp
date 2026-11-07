#include <bits/stdc++.h>
using namespace std;
string a1, a2, b1, b2;
long long sum, bj, c[5], j;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 != b1) {
		cout << "0000";
		return 0;
	} else {
		c[0] = 1;
		for (int i = 0; i < a2.size(); i++) {
			if (i != a2.size() - 1 && a2[i] != b2[i]) {
				c[1] = 0;
				c[2] = 0;
				c[3] = 0;
				break;
			}
			if (i != a2.size() - 1 && a2[i] == b2[i])
				c[1] = 1;
			else if (i == a2.size() - 1 ) {
				if (a2[i] == 'F' && b2[i] == 'D' || a1[i] == 'F' && b2[i] == 'D') {
					c[3] = 1;
					break;
				}
				if ((a2[i] == 'A' && (b2[i] == 'B' || b2[i] == 'C')) || (a2[i] == 'B' && (b2[i] == 'A' || b2[i] == 'C'))
				        || (a2[i] == 'C' && (b2[i] == 'B' || b2[i] == 'A'))) {
					if (a2[i] == 'A' && b2[i] == 'B' || a1[i] == 'A' && b2[i] == 'B') {
						c[3] = 1;
						c[2] = 1;
						break;
					} else if (a2[i] == 'C' && b2[i] == 'B' || a1[i] == 'C' && b2[i] == 'B') {
						c[3] = 1;
						c[2] = 1;
						break;
					} else {
						c[3] = 0;
						c[2] = 1;
					}
				} else {
					c[2] = 0;
					c[3] = 0;
				}
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << c[i];
	}
	return 0;
}
