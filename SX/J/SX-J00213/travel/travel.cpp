#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie();
	int a, c, x, y;
	char b, d;
	cin >> a >> x >> b >> c >> y >> d;
	if (a == c) {
		cout << 1;
		if (x == y) {
			cout << 1;
			if (b == 'A' && d == 'B') {
				cout << 11;
			}
			if (b == 'A' && d == 'C') {
				cout << 10;
			}
			if (b == 'A' && d == 'D') {
				cout << 0;
				cout << 0;
			}
			if (b == 'A' && d == 'F') {
				cout << 0;
				cout << 0;
			}
			//ft
			if (b == 'B' && d == 'A') {
				cout << 11;
			}
			if (b == 'B' && d == 'C') {
				cout << 11;
			}
			if (b == 'B' && d == 'D') {
				cout << 0;
				cout << 0;
			}
			if (b == 'B' && d == 'F') {
				cout << 0;
				cout << 0;
			}
			//FT
			if (b == 'C' && d == 'A') {
				cout << 10;
			}
			if (b == 'C' && d == 'B') {
				cout << 11;
			}
			if (b == 'C' && d == 'D') {
				cout << 0;
				cout << 0;
			}
			if (b == 'C' && d == 'F') {
				cout << 0;
				cout << 0;
			}
			//FT
			if (b == 'D' && d == 'A') {
				cout << 0;
				cout << 0;
			}
			if (b == 'D' && d == 'B') {
				cout << 0;
				cout << 0;
			}
			if (b == 'D' && d == 'C') {
				cout << 0;
				cout << 0;
			}
			if (b == 'D' && d == 'F') {
				cout << 11;
			}
			//FT
			if (b == 'F' && d == 'A') {
				cout << 0;
				cout << 0;
			}
			if (b == 'F' && d == 'B') {
				cout << 0;
				cout << 0;
			}
			if (b == 'F' && d == 'C') {
				cout << 0;
				cout << 0;
			}
			if (b == 'F' && d == 'D') {
				cout << 11;
			}
		} else {
			cout << 0;
			cout << 0;
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
	}



	return 0;
}