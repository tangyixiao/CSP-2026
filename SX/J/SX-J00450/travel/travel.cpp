#include <bits/stdc++.h>
using namespace std;
#define int long long
string c1, s1, c2, s2;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2)
		cout << "0000";
	else {
		cout << "1";
		int num1 = (s1[0] - '0') * 10 + (s1[1] - '0');
		int num2 = (s2[0] - '0') * 10 + (s2[1] - '0');
		if (num1 != num2) {
			cout << "000";
		} else {
			cout << "1";
			if ((s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D'
			        && s2[2] <= 'F')) {
				cout << "1";
				if (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F')
					cout << "1";
				else {
					if (s1[2] > s2[2]) {
						if (s1[2] - 1 == s2[2]) {
							cout << "1";
						} else {
							cout << "0";
						}
					} else {
						if (s1[2] == s2[2] - 1) {
							cout << "1";
						} else {
							cout << "0";
						}
					}
				}
			} else
				cout << "00";
		}
	}
	return 0;
}
//Trick||Treat!