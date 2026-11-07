#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a, b, c, d;
bool flag = true;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> a >> b >> c >> d;

	if (a != c) {
		cout << "0000";
		return 0;
	}
	if (a == c) {
		cout << '1';
		if (b[0] == d[0] && b[1] == d[1]) { //[1]
			cout << '1';
			if (b[1] == d[1] && b[0] == d[0] && ((b[2] + d[2] <= 'B' + 'C' && b[2] + d[2] >= 'B' + 'A')
			                                     || (b[2] + d[2] == 'D' + 'F'))) {
				cout << '1';
				if (abs(b[2] - d[2]) == 1 && b[2] + d[2] != 'C' + 'D') { //[3]
					cout << '1';
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}

		} else {
			cout << "000";
		}
	}
}

