#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int ans1, ans2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (s1[2] == 'D' || s1[2] == 'F') {
		ans1 = 0;
	} else {
		ans1 = 1;
	}
	if (s2[2] == 'D' || s2[2] == 'F') {
		ans2 = 0;
	} else {
		ans2 = 1;
	}
	if (c1[1] == c2[1] && c1[0] == c2[0]) {
		cout << 1;
		if (s1[1] == s2[1] && s1[0] == s2[0]) {
			cout << 1;
			if (ans1 == ans2) {
				cout << 1;
				if (ans1 == 0) {
					cout << 1 << endl;
				} else {
					if (s1[2] == 'B' || s2[2] == 'B') {
						cout << 1 << endl;
					} else {
						cout << 0 << endl;
					}
				}
			} else {
				cout << 0 << 0 << endl;
			}
		} else {
			cout << 0 << 0 << 0 << endl;
		}
	} else {
		cout << 0 << 0 << 0 << 0 << endl;
	}
	return 0;
}
