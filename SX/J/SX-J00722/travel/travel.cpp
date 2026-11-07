#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int a = 0, b = 0, c = 0, d = 0;
	if (c1 == c2) {
		a = 1;
	} else {
		a = 0;
	}
	if (a == 0) {
		cout << "0000";
		return 0;
	}
	int s = s1.size();
	for (int i = 0; i < s - 1; i++) {
		if (s1[i] == s2[i]) {
			b = 1;
		} else {
			b = 0;
		}
	}
	if (b == 0) {
		cout << "1000";
		return 0;
	}
	if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C' && s1[2] != s2[2]) {
		c = 1;
	}
	if (s1[2] == 'D' && s2[2] == 'F') {
		c = 1;
	}
	if (s1[2] == 'F' && s2[2] == 'D') {
		c = 1;
	}
	if (c == 0) {
		cout << "1100";
		return 0;
	}
	if (s1[2] == 'D' && s2[2] == 'F') {
		d = 1;
	}
	if (s1[2] == 'F' && s2[2] == 'D') {
		d = 1;
	}
	if (s1[2] == 'A' && s2[2] == 'B') {
		d = 1;
	}
	if (s1[2] == 'B' && s2[2] == 'A') {
		d = 1;
	}
	if (s1[2] == 'B' && s2[2] == 'C') {
		d = 1;
	}
	if (s1[2] == 'C' && s2[2] == 'B') {
		d = 1;
	}
	if (d == 0) {
		cout << "1110";
		return 0;
	}
	if (a == 1 && b == 1 && c == 1 && d == 1) {
		cout << "1111";
	}
	return 0;
}
