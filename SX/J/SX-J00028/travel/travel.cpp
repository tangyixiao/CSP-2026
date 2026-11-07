#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, a1, b1;
	cin >> a >> a1 >> b >> b1;

	if (a[0] == b[0] && a[1] == b[1]) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (a[0] == b[0] && a[1] == b[1] && a1[0] == b1[0] && a1[1] == b1[1] && a1[2] != b1[2]) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (a[0] == b[0] && a[1] == b[1] && a1[0] == b1[0] && a1[1] == b1[1] && a1[2] != b1[2] && ((a1[2] <= 'C'
	        && b1[2] <= 'C') || (a1[2] >= 'D'
	                             && b1[2] >= 'D') ) && a1[2] != b1[2]) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (a[0] == b[0] && a[1] == b[1] && a1[0] == b1[0] && a1[1] == b1[1] && a1[2] != b1[2] && (a1[2] <= 'C'
	        && b1[2] <= 'C') && a1[2] != b1[2]) {
		if (a1[2] == 'B' || b1[2] == 'B') {
			cout << "1";
		} else {
			cout << "0";
		}
	} else {
		cout << "0";
	}



	return 0;
}
