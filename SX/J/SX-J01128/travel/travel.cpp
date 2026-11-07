#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a = c) {
		cout << 1;
		if (b[1] == d[1] && b[2] == d[2]) {
			cout << 1;
			if (b[3] = 'A' || 'B' || 'C' && d[3] = 'A' || 'B' || 'C') {
				cout << 1;
			} else if (b[1] = 'D' || 'F' && d[3] = 'D' || 'F')
				cout << 1;
			else
				cout << 0;
		} else
			cout << 0;
	} else
		cout << 0;
}
