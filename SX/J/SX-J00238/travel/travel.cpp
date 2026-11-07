#include <bits/stdc++.h>
using namespace std;
int x1, x2, p1, p2;
char l1, l2;

int main() {
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	cin >> x1 >> p1 >> l1 >> x2 >> p2 >> l2;
	if (x1 == x2) {
		cout << "1";
		if (p1 == p2) {
			cout << "1";
			if ((l1 <= 'C' && l2 <= 'C') || (l1 >= 'D' && l2 <= 'D')) {
				cout << "1";
				int a, b;
				a = l1;
				b = l2;
				if (a + 1 == b || a - 1 == b) {
					cout << "1";
					return 0;
				} else {
					cout << "0";
					return 0;
				}
			} else if (l1 >= 'D' && l2 <= 'D') {
				cout << "11";
				return 0;
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}

	return 0;
}
