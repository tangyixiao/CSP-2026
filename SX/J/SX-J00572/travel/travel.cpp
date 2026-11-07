#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, c1, s2, c2;
	cin >> s1 >> c1 >> s2 >> c2;
	bool n, m, x, y;
	for (int i = 0; i < 1; i++) {
		if (s1[i] != s2[i]) {
			n = 0;
			break;
		} else {
			n = 1;
		}
	}
	if (n == 0) {
		cout << "0000";
		return 0;
	} else {
		for (int i = 0; i < 1; i++) {
			if (c1[i] != c2[i]) {
				cout << "1000";
				return 0;
			} else {
				m = 1;
			}
		}
	}
	if ((c1[2] >= 'A' && c1[2] <= 'C' && c2[2] >= 'A' && c2[2] <= 'C') || ((c1[2] == 'D' || c1[2] == 'F') && (c2[2] == 'D'
	        || c2[2] == 'F'))) {
		x = 1;
	} else {
		cout << "1100";
		return 0;
	}
	if (int(c1[2]) - int(c2[2]) == 1 || int(c1[2]) - int(c2[2]) == -1) {
		y = 1;
	} else {
		cout << "1110";
		return 0;
	}
	cout << "1111";
}
