#include <bits/stdc++.h>
using namespace std;
int a, b;
string s, r;

int main() {
//	freopen("travel.in", "r", stdin);
//	freopen("travel.out", "w", stdout);
	cin >> a >> s >> b >> r;
	if (a == b) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	for (int i = 0; i <= 1; i++) {
		if (s[i] != r[i]) {
			cout << "000";
			return 0;
		}
	}
	if (s[2] == 'A' || s[2] == 'B' || s[2] == 'C') {
		if (r[2] == 'A' || r[2] == 'B' || r[2] == 'C') {
			cout << 11;
			if (s[2] + 1 == r[2] || s[2] - 1 == r[2]) {
				cout << 1;
				return 0;
			}
			cout << 0;
			return 0;
		} else {
			cout << 100;
			return 0;
		}
	} else {
		if (r[2] == 'D' || r[2] == 'F') {
			cout << 11;
			if (s[2] + 1 == r[2] || s[2] - 1 == r[2]) {
				cout << 1;
				return 0;
			}
			cout << 0;
			return 0;
		} else {
			cout << 100;
			return 0;
		}
	}
	return 0;
}
