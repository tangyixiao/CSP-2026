#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int i;
	string c1, s, c2, ss;
	cin >> c1 >> s >> c2 >> ss;
	if (c1 == c2) {
		cout << "1";
		for (i = 1; i <= 3; i++) {
			if (s[i] >= '1' && s[i] <= '9' && ss[i] > '1' && ss[i] <= '9') {
				if (s[i] != ss[i]) {
					cout << "000";
					break;
				} else {
					cout << "1";
				}
			}
			if (s[i] > 'A' && s[i] <= 'G' && ss[i] > 'A' && ss[i] <= 'G') {
				if (s[i] <= 'C' && ss[i] <= 'C') {
					cout << "1";
				} else if (s[i] > 'C' && ss[i] > 'C') {
					cout << "1";
				} else {
					cout << "00";
					break;
				}
				if (s[i] - ss[i] == 1) {
					cout << "1";
				} else {
					cout << "0";
					break;
				}
			}
		}
	} else {
		cout << "0000";
	}
	return 0;
}
