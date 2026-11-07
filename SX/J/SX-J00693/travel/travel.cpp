#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1;
	string s2;
	int a, b, c, d;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a = 1;
		if (s1[1] == s2[1] && s1[2] == s2[2]) {
			b = 1;
			if (s1[3] == 'A' && s2[3] == 'B') {
				c = 1;
			}
			if (s1[3] == 'A' && s2[3] == 'C') {
				c = 1;
			}
			if (s1[3] == 'B' && s2[3] == 'A') {
				c = 1;
			}
			if (s1[3] == 'B' && s2[3] == 'C') {
				c = 1;
			}
			if (s1[3] == 'C' && s2[3] == 'A') {
				c = 1;
			}
			if (s1[3] == 'C' && s2[3] == 'C') {
				c = 1;
			}
			if (s1[3] == 'D' && s2[3] == 'F') {
				c = 1;
			}
			if (s1[3] == 'F' && s2[3] == 'D') {
				c = 1;
			}
			if (s1[3] == 'A' && s2[3] == 'D') {
				c = 0;
			}
			if (s1[3] == 'B' && s2[3] == 'D') {
				c = 0;
			}
			if (s1[3] == 'C' && s2[3] == 'D') {
				c = 0;
			}
			if (s1[3] == 'B' && s2[3] == 'D') {
				c = 0;
			}
			if (s1[3] == 'A' && s2[3] == 'F') {
				c = 0;
			}
			if (s1[3] == 'B' && s2[3] == 'F') {
				c = 0;
			}
			if (s1[3] == 'C' && s2[3] == 'F') {
				c = 0;
			}
			if (s1[3] == 'D' && s2[3] == 'A') {
				c = 0;
			}
			if (s1[3] == 'D' && s2[3] == 'B') {
				c = 0;
			}
			if (s1[3] == 'D' && s2[3] == 'C') {
				c = 0;
			}
			if (s1[3] == 'F' && s2[3] == 'A') {
				c = 0;
			}
			if (s1[3] == 'F' && s2[3] == 'B') {
				c = 0;
			}
			if (s1[3] == 'F' && s2[3] == 'C') {
				c = 0;
			}
		}
		for (int i = 1; i <= 3; i++) {
			if (s1[3] - '1' == s2[3] || s2[3] - '1' == s1[3]) {
				d = 1;
			} else {
				d = 0;
			}
		}
	}
	if (c1 != c2) {
		a = 0;
		b = 0;
		c = 0;
		d = 0;
	}
//for (int i = 1; i <= 3; i++) {



	cout << a << b << c << d;
	return 0;
}