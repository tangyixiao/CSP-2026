#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a1, a2, b1, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 != "01" || a1 != "16" || a2 != "01" || a1 != "16" || a1 == a2) {
		cout << "1";
		string b11 = "", b12 = "";
		b11 += b1[0];
		b11 += b1[1];
		b12 += b1[2];
		string b21 = "", b22 = "";
		b21 += b2[0];
		b21 += b2[1];
		b22 += b2[2];
		if (b11 == b21) {
			cout << "1";
			if ((b12 == "A" && b22 == "B") || (b12 == "A" && b22 == "C") || (b12 == "B" && b22 == "A") || (b12 == "B"
			        && b22 == "C") || (b12 == "C" && b22 == "A") || (b12 == "C" && b22 == "B") || (b12 == "D" && b22 == "F") || (b12 == "F"
			                && b22 == "D")) {
				cout << "1";
				if ((b12 == "A" && b22 == "B") || (b12 == "B" && b22 == "A") || (b12 == "B" && b22 == "C") || (b12 == "C"
				        && b22 == "B") || (b12 == "D" && b22 == "F") || (b12 == "F" && b22 == "D")) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
