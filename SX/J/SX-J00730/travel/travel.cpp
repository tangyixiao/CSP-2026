#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b;
	int c, d;
	string e, f;
	cin >> a >> c >> e >> b >> d >> f;
	if (a == b) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if (c == d) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if (e == "A" || e == "B" || e == "C" ) {
		if (f == "A" || f == "B" || f == "C") {
			cout << 1;
		} else {
			cout << "00";
			return 0;
		}
	}
	if (e == "D" || e == "F") {
		if (f == "D" || f == "F") {
			cout << 1;
		} else {
			cout << "00";
			return 0;
		}
	}
	if (e == "A" && f == "C") {
		cout << 0;
		return 0;
	}
	if (e == "C" && f == "A") {
		cout << 0;
		return 0;
	}
	cout << 1;
	return 0;
}