#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	int gcr = true;
	cin >> a  >> b >> c >> d;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0";
		gcr = false;
	}
	if (gcr == false) {
		cout << "0";
	} else {
		if ( b[1] == d[1] ) {
			cout << "1";
			gcr = true;
		} else {
			cout << "0";
			gcr = false;
		}
	}
	if (gcr == false) {
		cout << "0";
	} else {
		if (((b[2] == 'A') || ( b[2] == 'B') || (b[2] == 'C')) && ((d[2] == 'A') || (d[2] == 'B') || (d[2] == 'C'))
		        || ((b[2] == 'D')
		            || b[2] == 'F' && d[2] == 'D' || d[2] == 'F')) {
			cout << "1";
			gcr = true;
		} else {
			cout << "0";
			gcr = false;
		}
	}
	if (gcr == false) {
		cout << "0";
	} else {
		if (((b[2] == 'A' || b[2] == 'B') && (d[2] == 'A' || d[2] == 'B')) || ((b[2] == 'B' || b[2] == 'C') && (d[2] == 'B'
		        || d[2] == 'C')) || ((b[2] == 'D' || b[2] == 'F') && (d[2] == 'D' || d[2] == 'F'))) {
			cout << "1";
		} else {
			cout << "0";
		}
	}

	return 0;
}

