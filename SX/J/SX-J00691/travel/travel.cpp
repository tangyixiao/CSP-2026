#include <bits/stdc++.h>
using namespace std;
#define int long long
string s1, s2, c1, c2;
int a;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	string t1, t2, sh1, sh2;
	t1 = s1.substr(0, 2);
	t2 = s2.substr(0, 2);
	sh1 = s1.substr(2);
	sh2 = s2.substr(2);
	//cout << sh1 << " " << sh2 << endl << t1 << " " << t2;
	if (c1 == c2) {
		a += 1;
	} else if (c1 ==  "16" || c1 == " 1" || c2 == "16" || c2 == "1") {
		cout << "0000";
		return 0;
	} else
		cout << "0000";
	if (t1 == t2) {
		a += 1;
		if ((sh1 == "A" && sh2 == "C") || (sh1 == "C" && sh2 == "A")) {
			a += 0;
		}
		if ((sh1 == "A" && sh2 == "B") || (sh1 == "B" && sh2 == "C") || (sh1 == "D" && sh2 == "F") || (sh1 == "B"
		        && sh2 == "A") || (sh1 == "C" && sh2 == "B") || (sh1 == "F" && sh2 == "D")) {
			a += 2;
		} else
			a += 1;

	} else {
		cout << "1000";
		return 0;
	}


	if (a == 4)
		cout << "1111";
	if (a == 3) {
		cout << "1110";
	}
	if (a == 2) {
		cout << "1100";
	}
	if (a == 1)
		cout << "1000";
	if (a == 0)
		cout << "0000";
	return 0;
}
/*
02 01A 02 01B

1111*/
