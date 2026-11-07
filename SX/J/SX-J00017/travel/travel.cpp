#include <bits/stdc++.h>
using namespace std;
string b, d;
int a, c, m, n;
int x, y, z, t;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	m = b.size();
	if (a == c) {
		x = 1;
	}
	for (int i = 0; i < m - 1; i++) {
		y = 1;
		if ( b[i] != d[i]) {
			y = 0;
			break;
		}
	}
	if (x == 0) {
		y = 0;
	}
	if (b[m - 1] >= 'A' && b[m - 1] <= 'C' && d[m - 1] >= 'A' && d[m - 1] <= 'C' && y == 1) {
		z = 1;
	}
	if (b[m - 1] >= 'D' && b[m - 1] <= 'F' && d[m - 1] >= 'D' && d[m - 1] <= 'F' && y == 1) {
		z = 1;
	}
	if ((x == 1 && y == 1 && z == 1 && (abs(int(b[m - 1] - d[m - 1]))) == 1 ) || (b[m - 1] == 'D' && d[m - 1] == 'F' )) {
		t = 1;
	}
	cout << x << y << z << t;
	return 0;
}