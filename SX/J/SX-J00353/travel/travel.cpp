#include <bits/stdc++.h>
#define int long long
using namespace std;
string s1, s2, s3, s4, sa, sb, sx, sy;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s3) {
		cout << '1';
		sa = s2.substr(0, 2);
		sb = s4.substr(0, 2);
		if (sa == sb) {
			cout << '1';
			sx = s2.substr(2, 1);
			sy = s4.substr(2, 1);
			if (sx == "D" && sy == "F" || sx == "F" && sy == "D") {
				cout << "11";
			} else {
				if (sx == "A" && sy == "B" || sx == "B" && sy == "A" || sx == "C" && sy == "B" || sx == "B" && sy == "C") {
					cout << "11";
				}  else if (sx == "A" && sy == "C" || sx == "C" && sy == "A") {
					cout << "10";
				} else {
					cout << "00";
				}

			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
