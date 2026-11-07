#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a, s, d, f;
	cin >> a >> s >> d >> f;
	if (a == d) {
		cout << "1";
		if (s[0] == f[0] && s[1] == f[1]) {
			cout << "1";
			if (s[2] >= 'A' && s[2] <= 'C' && f[2] >= 'A' && f[2] <= 'C') {
				cout << "1";
				if (s[2] - f[2] == 1 || f[2] - s[2] == 1) {
					cout << "1";
				} else
					cout << "0";
			} else if (s[2] >= 'D' && s[2] <= 'F' && f[2] >= 'D' && f[2] <= 'F') {
				cout << "11";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}