#include <bits/stdc++.h>
#define int long long
using namespace std;

string c1, s1, c2, s2;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		cout << "1";
		char d1 = s1[0], d2 = s1[1];
		char d3 = s2[0], d4 = s2[1];
		if (d1 != d3 || d2 != d4) {
			cout << "000";
			return 0;
		} else {
			cout << "1";
			if ((s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D'
			        && s2[2] <= 'F')) {
				cout << "1";
				int a = (int)s1[2];
				int b = (int)s2[2];
				if (llabs(b - a) == 1) {
					cout << "1";
					return 0;
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		}
	}
	return 0;
}
