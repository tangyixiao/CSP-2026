#include <bits/stdc++.h>
using namespace std;
int c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1 / 10 == s2 / 10) {
			cout << 1;
			if ((s1 % 10 == 97 && s2 % 10 == 98) || (s1 % 10 == 98 && s2 % 10 == 99) || (s1 % 10 == 100 && s2 % 10 == 102)
			        || (s1 % 10 == 98 && s2 % 10 == 97) || (s1 % 10 == 99 && s2 % 10 == 98) || (s1 % 10 == 102 && s2 % 10 == 100)) {
				cout << 11;
			} else {
				cout << 00;
			}
		} else {
			cout << 000;
		}
	} else {
		cout << 0000;
	}
	return 0;
}
