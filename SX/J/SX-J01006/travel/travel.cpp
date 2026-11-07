#include <bits/stdc++.h>
using namespace std;

bool check(char c, char d) {
	if (c == 'D' && d == 'F') {
		return true;
	}
	if (c == 'F' && d == 'D') {
		return true;
	}
	if (c == 'A') {
		if (d == 'B' || d == 'C') {
			return true;
		}
	}
	if (c == 'B') {
		if (d == 'A' || d == 'C') {
			return true;
		}
	}
	if (c == 'C') {
		if (d == 'A' || d == 'B') {
			return true;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool judge1 = false;
	if (c1 == c2) {
		judge1 = true;
		cout << 1;
	} else {
		cout << 0;
	}
	bool judge2 = false;
	char a1 = s1[0], a2 = s1[1];
	char b1 = s2[0], b2 = s2[1];
	if (!judge1) {
		cout << 0;
	} else if (a1 == b1 && a2 == b2) {
		judge2 = true;
		cout << 1;
	} else {
		cout << 0;
	}
	char c = s1[2], d = s2[2];
	bool judge3 = false;
	if (!judge2) {
		cout << 0;
	} else if (check(c, d)) {
		judge3 = true;
		cout << 1;
	} else {
		cout << 0;
	}
	if (!judge3) {
		cout << 0;
	} else if (abs(c - d) == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	cout << '\n';
	return 0;
}
