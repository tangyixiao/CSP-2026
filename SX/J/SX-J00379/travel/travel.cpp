#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;

bool is_same_cx() {
	if (c1 == s1) {
		return 1;
	}
	return 0;
}

bool is_same_tp() {
	for (int i = 0; i <= 1; i++) {
		if (s2[i] != c2[i]) {
			return 0;
		}
	}
	return 1;
}

bool is_same_gd() {
	if (c2[2] == 'C' && s2[2] == 'B')
		return 1;
	if (c2[2] == 'B' && s2[2] == 'C')
		return 1;
	if (c2[2] == 'A' && s2[2] == 'B')
		return 1;
	if (c2[2] == 'B' && s2[2] == 'A')
		return 1;
	if (c2[2] == 'D' && s2[2] == 'F')
		return 1;
	if (c2[2] == 'F' && s2[2] == 'D')
		return 1;
	if (c2[2] == 'C' && s2[2] == 'A')
		return 1;
	if (c2[2] == 'A' && s2[2] == 'C')
		return 1;
	return 0;
}

bool is_beside() {
	if (c2[2] == 'C' && s2[2] == 'B')
		return 1;
	if (c2[2] == 'B' && s2[2] == 'C')
		return 1;
	if (c2[2] == 'A' && s2[2] == 'B')
		return 1;
	if (c2[2] == 'B' && s2[2] == 'A')
		return 1;
	if (c2[2] == 'D' && s2[2] == 'F')
		return 1;
	if (c2[2] == 'F' && s2[2] == 'D')
		return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> s1 >> s2;
	if (is_same_cx()) {
		if (is_same_tp()) {
			if (is_same_gd()) {
				if (is_beside()) {
					cout << "1111";
				} else {
					cout << "1110";
				}
			} else {
				cout << "1100";
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
	}

	return 0;
}