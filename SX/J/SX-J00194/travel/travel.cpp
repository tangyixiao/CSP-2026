#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> a >> b >> c >> d;
	if (a == c)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (b[0] + b[1] == d[0] + d[1])
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
		if (d[2] == 'D' || d[2] == 'F') {
			cout << "00";
			return 0;
		} else {
			cout << "1";
		}
	} else {
		if (d[2] == 'D' || d[2] == 'F') {
			cout << "1";
		} else {
			cout << "00";
			return 0;
		}
	}
	if (abs(d[2] - b[2]) == 1) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
