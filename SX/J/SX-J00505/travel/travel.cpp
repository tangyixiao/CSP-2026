#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
char m, n;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> m >> c >> d >> n;
	if (a == c) {
		cout << "1";
		if (b == d) {
			cout << "1";
			if (m == 'A' && n == 'B' ) {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}



			} else if (m == 'A' && n == 'C') {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}


			} else if (m == 'B' && n == 'C') {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}



			} else if (m == 'B' && n == 'A') {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}


			} else if (m == 'C' && n == 'A') {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}


			} else if (m == 'C' && n == 'B') {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}


			} else if (m == 'D' && n == 'F') {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}


			} else if (m == 'F' && n == 'D') {
				cout << "1";
				if (m == 'A' && n == 'B') {
					cout << "1";
				} else if (m == 'B' && n == 'A' ) {
					cout << "1";
				} else if (m == 'B' && n == 'C' ) {
					cout << "1";
				} else if (m == 'C' && n == 'B' ) {
					cout << "1";
				} else if (m == 'D' && n == 'F' ) {
					cout << "1";
				} else if (m == 'F' && n == 'D' ) {
					cout << "1";
				} else {
					cout << "0";
				}


			} else {
				cout << "00";
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
