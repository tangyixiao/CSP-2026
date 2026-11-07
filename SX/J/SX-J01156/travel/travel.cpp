#include <bits/stdc++.h>
using namespace  std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int a, b;
	a = s1[0] - '0';
	a *= 10;
	a = a + (s1[1] - '0');
	b = s2[0] - '0';
	b *= 10;
	b = b + (s2[1] - '0');
	if (c1 == c2) {
		cout << 1;
		if (a == b) {
			cout << 1;
			if ((s1[2] >= 'D' && s2[2] >= 'D') || (s1[2] < 'D' && s2[2] < 'D')) {
				cout << 1;
				if (abs(s1[2] - s2[2]) == 1 || (s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F')) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;
	}
}