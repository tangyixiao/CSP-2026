#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == "00" || a == "18" || a == "19" || a[0]  >= '2') {
		cout << "0000";
		return 0;
	}
	if (c == "00" || c == "18" || c == "19" || c[0]  >= '2') {
		cout << "0000";
		return 0;
	}
	if (b[2] != 'A' && b[2] != 'B'  && b[2] != 'C' && b[2] != 'D' && b[2] != 'E') {
		cout << "0000";
		return 0;
	}
	if (d[2] != 'A' && d[2] != 'B'  && d[2] != 'C' && d[2] != 'D' && d[2] != 'E') {
		cout << "0000";
		return 0;
	}
	if ((b[0] == '0' && b[1] == '0') ||  (b[0] == '1' && b[1] == '9') || (b[0]  >= '2') ) {
		cout << "0000";
		return 0;
	}
	if ((d[0] == '0' && d[1] == '0') || (d[0] == '1' && d[1] == '9')  || (d[0]  >= '2') ) {
		cout << "0000";
		return 0;
	}
	if (a == c && a != "01" && c != "01" && a != "16" && c != "16" ) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}

	if (b[0] == d[0] && b[1] == d[1] )
		cout << 1;
	else {
		cout << "000";
		return 0;
	}

	if ((b[2] >= 'A' && b[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C'
	    ) || (b[2] >= 'D' && b[2] <= 'E' && d[2] >= 'D'
	          && d[2] <= 'E') ) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}

	if (b[2] == d[2] + '1' || b[2] == d[2] - 1) {
		cout << 1;
	} else {
		cout << 0;
		return 0;
	}

}
