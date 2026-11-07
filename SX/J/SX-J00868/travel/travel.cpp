#include <bits/stdc++.h>
using namespace std;
int r1, x1, f;
string x2, r2;
int a[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r1 >> r2 >> x1 >> x2;
	if (r1 == x1) {
		a[0] = 1;
		if (x2[0] == r2[0] && x2[1] == r2[1]) {
			a[1] = 1;
			if ((x2[2] >= 'A' && x2[2] <= 'C') && r2[2] >= 'A' && r2[2] <= 'C') {
				a[2] = 1;
				f = 1;
			} else if (x2[2] >= 'D' && x2[2] <= 'F' && r2[2] >= 'D' && r2[2] <= 'F') {
				a[2] = 1;
				f = 1;
			}
			if (f == 1) {
				if (x2[2] - '0' == r2[2] - '0' + 1 || x2[2] - '0' == r2[2] - '0' - 1) {
					a[3] = 1;
				}
			}
		}
	}
	for (int i = 0; i <= 3; i++) {
		cout << a[i];
	}
}