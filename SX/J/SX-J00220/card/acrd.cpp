#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if (a == c)
		cout << 1;
	if (a != c) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}

	for (int i = 1; i < b.size() - 1; i++) {
		if (b[1] == d[1] && b[0] == d[0]) {
			cout << 1;
		} else {
			cout << 0 << 0 << 0;
			return 0;
		}
		if (b[2] == 'D' && d[2] == 'F')
			cout << 1;
		else if (b[2] == 'A' && d[2] == 'C')
			cout << 1;
		else
			cout << 0;
	}
	for (int i = 1; i < b.size() - 1; i++) {
		if (b[2] == 'D' && d[2] == 'F')
			cout << 1;
		else if (b[2] == 'B' && d[2] == 'C')
			cout << 1;
		else if (b[2] == 'A' && d[2] == 'B')
			cout << 1;
		else
			cout << 0;
	}
	return 0;
}