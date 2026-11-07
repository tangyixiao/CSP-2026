#include <bits/stdc++.h>
#define int long long
using namespace std;
char a[5], b[5], c[5], d[5];

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int o = 0;
	cin >> a >> c >> b  >> d;
	if (a[1] == b[1] && a[0] == b[0]) {
		cout << "1";
		if (c[0] == d[0] && c[1] == d[1]) {
			cout << "1";
			if (c[2] == 'A') {
				if (d[2] == 'B' || d[2] == 'C')
					cout << "1";
				else {
					cout << "00";
					o = 1;
				}
			}
			if (c[2] == 'B') {
				if (d[2] == 'A' || d[2] == 'C')
					cout << "1";
				else {
					cout << "00";
					o = 1;
				}

			}
			if (c[2] == 'C') {
				if (d[2] == 'B' || d[2] == 'A')
					cout << "1";
				else {
					cout << "00";
					o = 1;
				}

			}
			if (c[2] == 'D') {
				if (d[2] == 'F')
					cout << "1";
				else {
					cout << "00";
					o = 1;
				}

			}
			if (c[2] == 'F') {
				if (d[2] == 'D')
					cout << "1";
				else {
					cout << "00";
					o = 1;
				}

			}
			if (o == 0 && c[2] != 'C' && (d[2] - '0' + 1 == c[2] - '0' || d[2] - '0' - 1 == c[2] - '0'))
				cout << "1";
			else if (o == 0)
				cout << "0";
		} else
			cout << "000";

	} else
		cout << "0000";
	return 0;
}
