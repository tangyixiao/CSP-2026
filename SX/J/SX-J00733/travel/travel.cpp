#include <bits/stdc++.h>
using namespace std;
long long sum = 0, sum1 = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a != c) {
		cout << "0000";
		return 0;
	} else if (a == c) {
		cout << "1";
		if (b[0] == d[0] && b[1] == d[1]) {
			sum = 1;
		} else {
			sum = 0;
		}
	}
	if (sum == 0) {
		cout << "000";
		return 0;
	} else {
		cout << "1";
	}
	if ((b[2] == 'C' && d[2] == 'D') || (b[2] == 'D' && d[2] == 'C')) {
		sum1 = 0;
	} else {
		sum1 = 1;
	}
	if (sum1 == 0) {
		cout << "00";
		return 0;
	} else {
		cout << "1";
	}
	if (((b[2] == 'D' && d[2] == 'C') || (b[2] == 'C' && d[2] == 'D')) || ((b[2] == 'A' && d[2] == 'C') || (b[2] == 'C'
	        && d[2] == 'A'))) {
		cout << "0";
	} else {
		cout << "1";
	}
	return 0;
}
