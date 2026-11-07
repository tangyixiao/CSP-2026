#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b, m, n;
	cin >> a >> b >> m >> n;
	if (a == m) {
		cout << 1;
	} else {
		cout << 0;
	}

	if (a == m) {
		if (b[0] == n[0] && b[1] == n[1]) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}

	if (a == m) {
		if (b[0] == n[0] && b[1] == n[1]) {
			if (b[2] == 'A' && n[2] == 'B' || b[2] == 'B' && n[2] == 'A' || b[2] == 'A' && n[2] == 'C' || b[2] == 'C'
			        && n[2] == 'A' || b[2] == 'C' && n[2] == 'B' || b[2] == 'B' && n[2] == 'C' || b[2] == 'D' && n[2] == 'F' || b[2] == 'F'
			        && n[2] == 'D' ) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}

	if (a == m) {
		if (b[0] == n[0] && b[1] == n[1]) {
			if (b[2] == 'A' && n[2] == 'B' || b[2] == 'B' && n[2] == 'A' || b[2] == 'A' && n[2] == 'C' || b[2] == 'C'
			        && n[2] == 'A' || b[2] == 'C' && n[2] == 'B' || b[2] == 'B' && n[2] == 'C' || b[2] == 'D' && n[2] == 'F' || b[2] == 'F'
			        && n[2] == 'D' ) {
				if (b[2] == 'A' && n[2] == 'B' || b[2] == 'B' && n[2] == 'A' || b[2] == 'B' && n[2] == 'C' || b[2] == 'C'
				        && n[2] == 'B' || b[2] == 'D' && n[2] == 'F' || b[2] == 'F' && n[2] == 'D') {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0;
			}
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
//	freopen("travel.in", "r", stdin);
//	freopen("travel.out", "w", stdout);
	return 0;
}
