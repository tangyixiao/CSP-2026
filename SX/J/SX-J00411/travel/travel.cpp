#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, m, n;
string c, d;

main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> c >> b >> d;
	if (a != b) {
		cout << 0 << 0 << 0 << 0;
	} else if (a == b) {
		cout << 1;
		if (c[0] == d[0] && c[1] == d[1]) {
			cout << 1;
			if (c[2] >= 'A' && c[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C') {
				cout << 1;
				if (d[2] == 'B' || c[2] == 'B') {
					cout << 1;
				} else {
					cout << 0;
				}
			} else if ((c[2] == 'D' || c[2] == 'F') && (d[2] == 'D' || d[2] == 'F')) {
				cout << 1 << 1;
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	}




}