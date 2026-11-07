#include <bits/stdc++.h>
using namespace std;

int f(char ch) {
	if (ch == 'A' || ch == 'B' || ch == 'C')
		return 0;
	else
		return 1;
}

int check(char ch1, char ch2) {
	if (ch1 == 'A' && ch2 == 'B')
		return 1;
	if (ch1 == 'B' && ch2 == 'A')
		return 1;
	if (ch1 == 'B' && ch2 == 'C')
		return 1;
	if (ch1 == 'C' && ch2 == 'B')
		return 1;

	if (ch1 == 'D' && ch2 == 'F')
		return 1;
	if (ch1 == 'F' && ch2 == 'D')
		return 1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int a = 0, b = 0, c = 0, d = 0;
	if (c1 == c2) {
		a = 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			b = 1;
			if (f(s1[2]) == f(s2[2])) {
				c = 1;
				if (check(s1[2], s2[2]) == 1) {
					d = 1;
				}
			}
		}
	}
	cout << a << b << c << d;
	return 0;
}
//AC