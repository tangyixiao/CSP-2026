#include <bits/stdc++.h>

#define int long long
using namespace std;
const int N = 0;

string c1, c2, s1, s2;

inline bool pd(char c) {

	if (c >= 'A' && c <= 'C') {

		return true;//a-c

	}
	return false;//d-f
}

signed main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> c1 >> s1 >> c2 >> s2;
	bool ok1, ok2;

	ok1 = pd(s1[2]), ok2 = pd(s2[2]);

	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (ok1 == ok2) {
				cout << 1;
				if (char(s1[2] - 1) == s2[2] || char(s1[2] + 1) == s2[2]) {
					cout << 1;
				} else {
					cout << 0;
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
