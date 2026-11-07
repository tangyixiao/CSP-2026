#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	int x = (int)b[0] * 10 + (int)b[1];
	int y = (int)d[0] * 10 + (int)d[1];
	char l = b[2];
	char r = d[2];
	if (a == c) {
		cout << 1;
		if (x == y) {
			cout << 1;
			if ((l <= 'C' && r <= 'C') || (l >= 'D' && r >= 'D')) {
				cout << 1;
				if (l + 1 == r || l - 1 == r) {
					cout << 1;
				}
				else {
					cout << 0;
				}
			} else {
				cout << 0 << 0;
			}
		}
		else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
}