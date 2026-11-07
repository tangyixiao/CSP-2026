#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s, c, k, j;
	cin >> s >> c >> k >> j;
	if (s == k) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (s == k && c != j ) {
		cout << "1";
		if (s == k && c == j) {
			cout << "0";
		}
	}
	if (s == k && c != j &&  c != j) {
		cout << "1";
	} else {
		cout << "0";
	}
	if ( s != k) {
		cout << "0";
	} else {
		cout << "1";
	}
	if ( s != k && c == j) {
		cout << "0";
	}
	return 0;
}
