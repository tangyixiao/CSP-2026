#include <bits/stdc++.h>
using namespace std;
string c1, c2, c3, c4;
char r, x;
int a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> c2 >> c3 >> c4;
	r = c2[2];
	x = c4[2];
	a = r;
	b = x;
	if (c1 == c3) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (c2[0] == c4[0] && c2[1] == c4[1]) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if ('A' <= c2[2] && 'C' >= c2[2]) {
		if ('A' <= c4[2] && 'C' >= c4[2]) {
			cout << 1;
			if (r - x == 1 || x - r == 1) {
				cout << 1;
			} else
				cout << 0;
		} else
			cout << 0 << 0;

	} else if ('F' == r || 'D' == r) {
		if ('F' == x || 'D' == x) {
			cout << 1 << 1;
		} else
			cout << 0 << 0;
	}
	return 0;
}