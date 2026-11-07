#include <bits/stdc++.h>
using namespace std;
int a, b, x, y;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> x >> b >> y;
	int s = x % 100, o = y % 100;
	if (a != b) {
		cout << "0000";
		return 0;
	}
	if ((x / 100) != (y / 100)) {
		cout << "1000";
		return 0;
	}
	if ((s == 'A' || s == 'B' || s == 'C') && (o == 'F' || o == 'D')) {
		cout << "1100";
		return 0;
	} else if ((o == 'A' || o == 'B' || o == 'C') && (s == 'F' || s == 'D')) {
		cout << "1100";
		return 0;
	}
	if ((s == 'A' && o == 'B') || (s == 'B' && o == 'A') || (s == 'C' && o == 'B') || (s == 'B' && o == 'C') || (s == 'D'
	        && o == 'F') || (s == 'F' && o == 'D')) {
		cout << "1111";
		return 0;
	} else
		cout << "1110";
	return 0;
}