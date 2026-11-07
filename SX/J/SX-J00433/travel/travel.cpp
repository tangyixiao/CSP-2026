#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a, b, c, d, b0, d0;
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << 1;
		if (b[0] == d[0] && b[1] == d[1]) {
			cout << 1;
			b0 = b[2];
			d0 = d[2];
			if (b0 < "D" && d0 < "D" || b0 > "C" && d0 > "C" ) {
				cout << 1;
				if (b0 == "A" && d0 == "B" || b0 == "B" && d0 == "C" || b0 == "B" && d0 == "A" || b0 == "C" && d0 == "B" || b0 == "D"
				        && d0 == "F" || b0 == "F" && d0 == "D") {
					cout << 1;
				} else {
					cout << 0;

				}
			} else {
				cout << 0;
				cout << 0;
			}
		} else {
			cout << 0;
			cout << 0;
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;

	}
	return 0;

}