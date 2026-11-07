#include <bits/stdc++.h>
using namespace std;
int a, b;
int c[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string m, n;
	cin >> a >> m;
	cin >> b >> n;
	int x = m[0] + m[1];
	int y = n[0] + n[1];
	if (a == b) {
		c[1]++;
		if (x == y) {
			c[2]++;
			if ((m[2] - n[2] == 1 || m[2] - n[2] == -1) && (m[2] + n[2] != 135)) {
				c[4]++;
			}
			if (m[2] <= 67 && n[2] <= 67) {
				c[3]++;
			} else if (m[2] > 67 && n[2] > 67) {
				c[3]++;
			}
		}
	} else {
		cout << "0000";
		return 0;
	}
	for (int i = 1; i <= 4; i++) {
		cout << c[i];
	}
	return 0;
}
