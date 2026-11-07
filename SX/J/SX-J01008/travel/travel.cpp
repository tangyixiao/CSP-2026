#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string n, m, x, y;
	cin >> n >> m >> x >> y;
	if (n != x) {
		cout << "0000";
		return 0;
	}
	if (y[0] != m[0] || y[1] != m[1]) {
		cout << "1000";
		return 0;
	}
	if (m[2] == 'A' || m[2] == 'B' || m[2] == 'C') {
		if (y[2] == 'D' || y[2] == 'F') {
			cout << "1100";
			return 0;
		}
		if (y[2] != 'B' && m[2] != 'B') {
			cout << "1110";
			return 0;
		}
		cout << "1111";
		return 0;
	}
	if (y[2] == 'D' || y[2] == 'F') {
		cout << "1111";
		return 0;
	}
	cout << "1100";
	return 0;
}