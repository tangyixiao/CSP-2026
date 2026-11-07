#include <bits/stdc++.h>
#define ll long long
using namespace std;
int belong[10] = {1, 1, 1, 2, 0, 2};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1.substr(0, 2) == s2.substr(0, 2)) {
			cout << 1;
			if (belong[s1[2] - 'A'] == belong[s2[2] - 'A']) {
				cout << 1;
				if (abs(s1[2] - s2[2]) == 1) {
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
