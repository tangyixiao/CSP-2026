#include <bits/stdc++.h>
using namespace std;
string a, b;
char c[10], d[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b[1] >> b[2] >> b[3] >> c >> d[1] >> d[2] >> d[3];
	if (a == c) {
		cout << 1;
		if (b[1] == d[1] && b[2] == d[2]) {
			cout << 1;
			if (b[3] == 'A' && d[3] == 'B' || b[3] == 'A' && d[3] == 'C' || b[3] == 'B' && d[3] == 'C' || b[3] == 'B'
			        && d[3] == 'A' || b[3] == 'C' && d[3] == 'B' || b[3] == 'C' && d[3] == 'A' || b[3] == 'D' && d[3] == 'E' || b[3] == 'E'
			        && d[3] == 'D') {
				cout << 1;
				if (b[3] == 'A' && d[3] == 'B' || b[3] == 'B' && d[3] == 'C' || b[3] == 'B' && d[3] == 'A' || b[3] == 'C'
				        && d[3] == 'B' || b[3] == 'D' && d[3] == 'E' || b[3] == 'E' && d[3] == 'D') {
					cout << 1;
				} else {
					cout << 0;
					return 0;
				}
			} else {
				cout << 00;
				return 0;
			}
		} else {
			cout << 000;
			return 0;
		}
	} else {
		cout << 0000;
		return 0;
	}
	return 0;
}
