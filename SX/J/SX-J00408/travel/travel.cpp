#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a, c, b, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> c >> b >> d;
	if (a != "01" && a != "16" && b != "01" && b != "16") {
		if (a[0] == b[0] && a[1] == b[1]) {
			cout << 1;
			if (c[1] == d[1] && c[0] == d[0]) {
				cout << 1;
				if (c[2] == 'A' && (d[2] == 'B' || d[2] == 'C')) {
					cout << 1;

				} else if (c[2] == 'B' && (d[2] == 'A' || d[2] == 'C')) {
					cout << 1;

				} else if (c[2] == 'C' && (d[2] == 'A' || d[2] == 'B')) {
					cout << 1;

				} else if (c[2] == 'D' && d[2] == 'E') {
					cout << 1;

				} else if (c[2] == 'E' && d[2] == 'D') {
					cout << 1;

				} else {
					cout << 0;
				}
				if (c[2] == 'A' && d[2] == 'B') {
					cout << 1;

				} else if (c[2] == 'B' &&  d[2] == 'C') {
					cout << 1;

				} else if (c[2] == 'C' &&  d[2] == 'B') {
					cout << 1;

				} else if (c[2] == 'D' && d[2] == 'E') {
					cout << 1;

				} else if (c[2] == 'E' && d[2] == 'D') {
					cout << 1;

				} else {
					cout << 0;
				}
			} else {
				cout << "000";
			}

		} else {
			cout << "0000";
		}
	} else {
		cout << "0000";
	}


	return 0;
}
