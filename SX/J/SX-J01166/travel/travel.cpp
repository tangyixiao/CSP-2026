#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) { //xiang
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (s1.substr(0, 2) == s2.substr(0, 2)) { //pai
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	char a = s1[2], b = s2[2];
	if ((a < "C" && &b < "C") || (a > "C" && b > "D")) {//ce
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if ((s2[2] - s1[2] == 1 || s1[2] - s2[2] == 1) && ((b != "D" && a != "C") || (b != "D"
	        && a != "C"))) { //ling
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}