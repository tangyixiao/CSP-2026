#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << 1;
		string t1 = "" + b[0] + b[1], t2 = "" + d[0] + d[1];
		if (t1 == t2) {
			cout << 1;
			int ar = int(b[2] - 'A');
			int br = int(d[2] - 'A');
			if (ar <= 2 && br <= 2 || ar > 2 && br > 2) {
				cout << 1;
				if (abs(ar - br) == 1)
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
