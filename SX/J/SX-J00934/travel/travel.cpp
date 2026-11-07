#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, s1, c2, s2, a, b;
	cin >> c1 >> c2 >> s1 >> s2;
	for (int i = 1; i <= 4; i++) {
		cin  >> a >> b;
		if (c1 == s1) {
			cout << "1";
		} else {
			cout << "0";
		}
		if (c2 == s2) {
			cout << "1";
		} else {
			cout << "0";
		}
		if (a == 'A' && b == 'B')
			|| (a == 'B' && b == 'A') || (a == 'A' && b == 'C') || (a == 'C' && b == 'A') || (a == 'D'
			        && b == 'E') || (a == 'E' && b[i] == 'D') {
			cout << "1";
		} else {
			cout << "0";

			if (a == 'A' && b == 'B')
				|| (a == 'B' && b == 'A') || (a == 'B' && b == 'C') || (a == 'C' && b == 'B') || (a == 'D'
				        && b == 'E') || (a == 'E' && b == 'D') {
				cout << "1";
			} else {
				cout << "0";
			}
		}
		return 0;
	}
}
