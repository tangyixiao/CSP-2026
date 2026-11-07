#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1[5], s2[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1;
	for (int i = 1; i <= 3; i++) {
		cin >> s1[i];
	}
	cin >> c2;
	for (int i = 1; i <= 3; i++) {
		cin >> s2[i];
	}
	for (int i = 1; i < 2; i++) {
		if (c1 == c2) {
			cout << "1";
		} else {
			cout << "0000";
			break;
		}
		if (s1[1] == s2[1 && s1[2] == s2[2]]) {
			cout << "1";
		} else {
			cout << "000";
			break;
		}
		if ((s1[3] == "A" && s2[3] == "B") || (s1[3] == "B" && s2[3] == "C")  || (s1[3] == "D" && s2[3] == "F")
		        || (s2[3] == "A" && s1[3] == "B") || (s2[3] == "B" && s1[3] == "C") || (s2[3] == "D" && s1[3] == "F") || (s1[3] = "A"
		                && s2[3] == "C") || (s2[3] = "A" && s1[3] == "C")) {
			cout << "1";
		} else {
			cout << "00";
			break;
		}
		if s1[3]
			== "A" && s2[3] == "B") || (s1[3] == "B" && s2[3] == "C")  || (s1[3] == "D" && s2[3] == "F") || (s2[3] == "A"
			        && s1[3] == "B") || (s2[3] == "B" && s1[3] == "C") || (s2[3] == "D" && s1[3] == "F")) {
			cout << "1";
		} else {
			cout << "0";
		}
	}
}

return 0;
}