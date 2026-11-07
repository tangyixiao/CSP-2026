#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, f = 0;
	string c, d;
	cin >> a >> c >> b >> d;
	if (a == b) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	for (int i = 0; i <= 1; i++) {
		if (c[i] == d[i]) {
			f++;
		}
	}
	if (f == 2) {
		cout << 1;
		if (c[2] == 'D' && d[2] == 'F' || c[2] == 'F' && d[2] == 'D') {
			cout << 1 << 1;
			return 0;
		}
		if (c[2] == 'A' && d[2] == 'C' || c[2] == 'C' && d[2] == 'A') {
			cout << 1 << 0;
			return 0;
		}
		if (c[2] == 'C' && d[2] == 'D' || c[2] == 'D' && d[2] == 'C') {
			cout << 0 << 0;
			return 0;
		} else {
			cout << 1 << 1;
			return 0;
		}
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	return 0;
}