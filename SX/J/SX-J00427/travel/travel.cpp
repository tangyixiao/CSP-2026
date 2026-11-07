#include <bits/stdc++.h>
using namespace std;
string a, s, d, f;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s >> d >> f;
	if (a == d) {
		cout << 1;
		if (s[0] == f[0] && s[1] == f[1]) {
			cout << 1;
			if (s[2] >= 'A' && s[2] <= 'C' && f[2] >= 'A' && f[2] <= 'C') {
				cout << 1;
				if (s[1] + 1 == f[1] || s[1] - 1 == f[1] || s[2] + 2 == f[2] || s[2] - 2 == f[2]) {
					cout << 1;
				} else if (s[0] == '1' && s[1] == '0' && f[1] == '9') {
					cout << 1;
				} else if (f[0] == '1' && f[1] == '0' && s[1] == '9') {
					cout << 1;
				} else {
					cout << 0;
				}
			} else if (s[2] == 'D' || s[2] == 'F' && f[2] == 'D' || f[2] == 'F') {
				cout << 1;
				if (s[1] + 1 == f[1] || s[1] - 1 == f[1] || s[2] + 2 == f[2] || s[2] - 2 == f[2]) {
					cout << 1;
				} else if (s[0] == '1' && s[1] == '0' && f[1] == '9') {
					cout << 1;
				} else if (f[0] == '1' && f[1] == '0' && s[1] == '9') {
					cout << 1;
				} else {
					cout << 0;
				}
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