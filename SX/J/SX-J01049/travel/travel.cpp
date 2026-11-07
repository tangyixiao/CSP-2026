#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int set1, set2, a1, b1;
	char s1, s2;
	cin >> set1 >> a1 >> s1;
	cin >> set2 >> b1 >> s2;
	if (set1 != set2) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (set1 == set2) {
		cout << 1;
		if (a1 == b1) {
			cout << 1;
			if ((s1 == 'F' || s1 == 'D') && (s2 == 'F' || s2 == 'D')) {
				cout << 11;
				return 0;
			} else if ((s1 - s2 < 3 || s2 - s1 < 3) && s1 != 'D' && s2 != 'D') {
				cout << 1;
				if (s1 - s2 == 1 || s2 - s1 == 1) {
					cout << 1;
					return 0;
				} else {
					cout << 0;
					return 0;
				}
			} else {
				cout << 0 << 0;
				return 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	}
	return 0;
}
