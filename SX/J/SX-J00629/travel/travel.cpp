#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int a = 0, b = 0, c = 0, d = 0, e = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a = 1;
	}
	if (s1[1] == s2[1] && s1[0] == s2[0] && a == 1) {
		b = 1;
	}
	if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C' && b == 1 || s1[2] >= 'D' && s1[2] <= 'E'
	        && s2[2] >= 'D' && s2[2] <= 'E' && b == 1) {
		c = 1;
	}
	if (e != 1 && s1[2] - s2[2] <= 1 && c == 1) {
		if (s1[2] == 'C' && s2[3] == 'D') {
			d = 0;
		} else {
			d = 1;
		}
	}
	cout << a << b << c << d;
	return 0;
}