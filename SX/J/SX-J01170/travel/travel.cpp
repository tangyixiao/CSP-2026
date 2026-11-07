#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> c >> b >> d;
	if (a == b && a != "01" && a != "16") {
		cout << 1;
		if (c[0] == d[0] && c[1] == d[1]) {
			cout << 1;
			if (c[2] < 'D' && d[2] < 'D') {
				cout << 1;
				if (c[2] == 'B' || d[2] == 'B') {
					cout << 1;
				} else {
					cout << 0;
				}
			} else if (c[2] > 'C' && d[2] > 'C') {
				cout << 11;
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