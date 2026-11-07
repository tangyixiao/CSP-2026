#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
string a[100010], b[100010];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> b[i];
	}
	if (c1 == c2) {
		cout << "1";
		if (a[0] == b[0] && a[1] == b[1]) {
			cout << "1";
			if ((a[2] == "D" && b[2] == "F") || (a[2] == "F" || b[2] == "D")) {
				cout << "11";
			} else if ((a[2] == "A" && b[2] == "B") || (b[2] == "A" && a[2] == "B") || (a[2] == "B" && b[2] == "C") || (a[2] == "C"
			           && b[2] == "B")) {
				cout << "11";
			} else if (((a[2] != "A" && b[2] != "B") || (b[2] != "A" && a[2] != "B") || (a[2] != "B" && b[2] != "C")
			            || (a[2] != "C" && b[2] != "B")) && (a[0] == b[0] && a[1] == b[1])) {
				cout << "10";
			} else {
				cout << "00";
			}
		}
	} else {
		cout << "0000";
	}
	return 0;
}
