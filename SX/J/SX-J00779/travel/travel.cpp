#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2 || c1 == "01" || c1 == "16" || c2 == "01" || c2 == "16") {
		cout << "0000";
	} else {
		cout << "1";
		string t1 = "", t2 = "";
		t1 += s1[0] + s1[1], t2 += s2[0] + s2[1];
		if (t1 != t2) {
			cout << "000";
		} else {
			cout << "1";
			t1 = s1[2], t2 = s2[2];
			if ((t1 == "A" || t1 == "B" || t1 == "C") && (t2 == "A" || t2 == "B" || t2 == "C")) {
				cout << "1";
				if ((t1 == "A" && t2 == "B") || (t1 == "B" && t2 == "A") || (t1 == "B" && t2 == "C") || (t1 == "C" && t2 == "B")) {
					cout << "1";
				} else
					cout << "0";
			} else if ((t1 == "D" || t1 == "F") && (t2 == "D" || t2 == "F")) {
				cout << "11";
			} else {
				cout << "00";
			}

		}
	}
	return 0;
}
