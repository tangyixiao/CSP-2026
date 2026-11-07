#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b, c, d;
	int a1 = 0, b1 = 0, c1 = 0, d1 = 0;
	cin >> a >> b >> c >> d;
	if (a == c) {
		a1 = 1;
		if (b[0] == d[0] && b[1] == d[1]) {
			b1 = 1;
			if ((b[2] >= 'A' && b[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C') || (b[2] >= 'D' && b[2] <= 'E' && d[2] >= 'D'
			        && d[2] <= 'E')) {
				c1 = 1;
				if (abs(b[2] - d[2]) == 1)
					d1 = 1;
			}
		}
	}
	cout << a1 << b1 << c1 << d1;
}
