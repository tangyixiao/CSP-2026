#include <bits/stdc++.h>
using namespace std;
int c[3], n, m;
string s, a;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c[1] >> s ;
	a = s;
	cin >> c[2] >> s;
	if (c[1] != c[2]) {
		cout << "0000";
		return 0;
	}
	if (a[0] == s[0] && a[1] == s[1])
		cout << "11";
	else {
		cout << "1000";
		return 0;
	}
	if (a[2] == 'A' || a[2] == 'B' || a[2] == 'C') {
		if (s[2] == 'A' || s[2] == 'B' || s[2] == 'C') {
			cout << "1";
			n = a[2];
			m = s[2];
			if (n + 1 == m || m + 1 == n) {
				cout << "1";
				return 0;
			} else {
				cout << "0";
				return 0;
			}
		}
		cout << "00";
	} else if (a[2] == 'D' || a[2] == 'F') {
		if (s[2] == 'D' || s[2] == 'D') {
			cout << "11";
			return 0;
		}
	} else
		cout << "00";
	return 0;
}
