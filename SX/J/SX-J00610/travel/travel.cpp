#include <bits/stdc++.h>
using namespace std;
string a, b, x, y;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> x >> y;
	if (a[0] == x[0] && a[1] == x[1]) {
		cout << 1;
		if (b[0] == y[0] && b[1] == y[1]) {
			cout << 1;
			if (min(b[2], y[2]) + 2 >= max(b[2], y[2]) && min(b[2], y[2]) != 'C') {
				cout << 1;
				if (max(b[2], y[2]) * 1 - min(b[2], y[2]) == 1 && min(b[2], y[2]) != 'C')
					cout << 1;
				else
					cout << 0;
			} else {
				cout << 0;
				cout << 0;
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