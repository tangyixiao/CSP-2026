#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	long long f = 0, f1 = 0, f2 = 0, s;
	cin >> a >> b >> c >> d;
	s = a.size();
	for (int i = 0; i <= s - 1; i++) {
		if (a[i] == c[i]) {
			f = 0;
		} else {
			f = 1;
			break;
		}
	}
	if (f == 1) {
		cout << 0;
	} else {
		cout << 1;
	}
	f = 0;
	s = b.size();
	for (int i = 0; i <= s - 1; i++) {
		if (b[i] == d[i] && b[i + 1] == d[i + 1] && b[2] != d[2]) {
			f = 0;
			break;
		} else {
			f = 1;

		}
	}
	for (int i = 0; i <= s - 1; i++) {
		if (!(b[i + 2] == 'D' && d[i + 2] == 'F' || b[i + 2] == 'F' && d[i + 2] == 'D' || b[i + 2] == 'A' && d[i + 2] == 'B'
		        || b[i + 2] == 'B' && d[i + 2] == 'C' || b[i + 2] == 'C' && d[i + 2] == 'A')) {
			f1 = 1;
		} else {
			f1 = 0;
			break;
		}
	}
	for (int i = 1; i <= s - 1; i++) {
		if (b[2] == 'D' && d[2] == 'F' || b[2] == 'A' && d[2] == 'B' || b[2] == 'B' && d[2] == 'C') {
			f2 = 0;
			break;
		} else {
			f2 = 1;
		}
	}
	if (f == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f1 == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (f2 == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
