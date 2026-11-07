#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a = 0, c = 0;
	string b, d, j, k;
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (b[1] == d[1] and d[0] == b[0]) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if (((int('A') <= int(b[2])) and (int(b[2]) <= int('C'))) and (int('A') <= int(d[2])) and (int(d[2]) <= int('C'))) {
		cout << 1;
		if ((int('D') <= int(b[2])) and (int(b[2]) <= int('F')) and (int('D') <= int(d[2])) and (int(d[2]) <= int('F'))) {
			cout << 1;
			return 0;
		} else if (b[2] - 1 == d[2] or b[2] == d[2] - 1) {
			cout << 1;
		} else {
			cout << 0;
		}
		return 0;
	} else if ((int('D') <= int(b[2])) and (int(b[2]) <= int('F')) and (int('D') <= int(d[2]))
	           and (int(d[2]) <= int('F'))) {
		cout << 1;
	} else {
		cout << 0 << 0;
		return 0;
	}
	if ((int('D') <= int(b[2])) and (int(b[2]) <= int('F')) and (int('D') <= int(d[2])) and (int(d[2]) <= int('F'))) {
		cout << 1;
		return 0;
	} else if (b[2] - 1 == d[2] or b[2] == d[2] - 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
