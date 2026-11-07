#include <bits/stdc++.h>
using namespace std;
bool c[100];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, aa, b, bb;
	cin >> a >> aa >> b >> bb;
	if (a == b) {
		c[1] = 1;
		if (aa[0] == bb[0] && aa[1] == bb[1]) {
			c[2] = 1;
			if ((char(aa[2]) >= 'A' && char(aa[2]) <= 'C') && (char(bb[2]) >= 'A' && char(bb[2]) <= 'C')) {
				c[3] = 1;
				if (abs(aa[2] - bb[2]) == 1)
					c[4] = 1;
			} else if ((char(aa[2]) == 'D' || char(aa[2]) == 'F') && (char(bb[2]) == 'D' || char(bb[2]) == 'F')) {
				c[3] = 1;
				c[4] = 1;
			}
		}
	}
	for (int i = 1; i < 5; i++)
		cout << c[i];
	return 0;
}
