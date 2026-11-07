#include <bits/stdc++.h>
using namespace std;
long long c1, c2;
long long p1, p2;
char l1, l2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> p1 >> l1 >> c2 >> p2 >> l2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (p1 == p2) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if (l1 == 'A' || l1 == 'B' || l1 == 'C') {
		if (l2 == 'A' || l2 == 'B' || l2 == 'C') {
			cout << 1;
		} else {
			cout << 0 << 0;
			return 0;
		}
	} else if (l1 == 'D' || l1 == 'F') {
		if (l2 == 'D' || l2 == 'F') {
			cout << 1 << 1;
			return 0;
		} else {
			cout << 0 << 0;
			return 0;
		}
	}
	if (l1 == 'A') {
		if (l2 == 'B') {
			cout << 1;
			return 0;
		} else {
			cout << 0;
			return 0;
		}
	} else if (l1 == 'B') {
		if (l2 == 'A') {
			cout << 1;
			return 0;
		} else if (l2 == 'C') {
			cout << 1;
			return 0;
		} else {
			cout << 0;
			return 0;
		}
	} else {
		if (l2 == 'B') {
			cout << 1;
			return 0;
		} else {
			cout << 0;
			return 0;
		}
	}
	return 0;
}//100(AC)
