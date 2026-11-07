#include <bits/stdc++.h>
using namespace std;
string r1, r2, x1, x2;
int a = 1, b = 1, c = 0, d = 1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> r1 >> r2 >> x1 >> x2;
	for (int i = 0; i < 2; i++) {
		if (r1[i] == x1[i])
			continue;
		else {
			d = 0;
		}

	}
	for (int i = 0; i < 3; i++) {
		if (i == 0 || i == 1) {
			if (d) {
				if (r2[i] == x2[i])
					a = 1;
				else {
					a = 0;
				}
			} else
				a = 0;
		}


		else {
			if (a) {
				if ((r2[i] <= 'C' && x2[i] <= 'C') || ('D' <= r2[i] && 'D' <= x2[i])) {
					b = 1;
				}

				else {
					b = 0;
				}
			} else
				b = 0;

		}
		if (b && a) {

			if (r2[i] == 'C') {
				if (x2[i] == 'B')
					c = 1;
			}
			if (r2[i] == 'A') {
				if (x2[i] == 'B')
					c = 1;
			}
			if (r2[i] == 'B') {
				if (x2[i] == 'B' || x2[i] == 'C')
					c = 1;
			}
			if (r2[i] == 'D') {
				if (x2[i] == 'F')
					c = 1;
			}
			if (r2[i] == 'F') {
				if (x2[i] == 'D')
					c = 1;
			}
		} else
			c = 0;
	}
	if (d)
		cout << 1;
	else
		cout << 0;
	if (a)
		cout << 1;
	else
		cout << 0;
	if (b)
		cout << 1;
	else
		cout << 0;
	if (c)
		cout << 1;
	else
		cout << 0;
	return 0;
}
