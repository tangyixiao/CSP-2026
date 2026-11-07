#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a == c && b[1] == d[1] && b[2] == d[2] - 1 ) {
		cout << "1111";
	}
	if (a == c && b[1] == d[1] && b[2] != d[2]) {
		cout << "1110";

	}
	if (a == c &&  b[2] == 'C' && d[2] == 'D') {
		cout << "1100";
	}
	if (a == c &&  b[2] != d[2] && b[1] != d[1]) {
		cout << "1000";
	}
	if (a != c ) {
		cout << "0000";
	}

	return 0;
}
