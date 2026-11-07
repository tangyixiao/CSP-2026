#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b >> c >> d;
	if (a != c) {
		cout << "0000";
		return 0;
	}
	for (int i = 1; i <= 3; i++) {
		if (b[i] >= '0' && b[i] <= '9') {
			if (b[i] != d[i]) {
				cout << "1000";
				return 0;
			}
		} else {
			if ((b[i] <= 'C' && d[i] > 'C') || (b[i] > 'C' && d[i] <= 'C')) {
				cout << "1100";
				return 0;
			}
			if (abs(int(b[i]) - int(d[i])) == 2) {
				if (!((b[i] == 'D' && d[i] == 'F') || (d[i] == 'D' && b[i] == 'F'))) {
					cout << "1110";
					return 0;
				}
			}
		}
	}
	cout << "1111";
	return 0;
}
