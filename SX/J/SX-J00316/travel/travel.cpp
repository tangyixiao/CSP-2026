#include <bits/stdc++.h>

using namespace std;

long long a, b;
string hzt, yzh;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> hzt >> b >> yzh;
	if (a != b) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	cout << 1;
	if (hzt[1] != yzh[1] || hzt[0] != yzh[0]) {
		cout << 0 << 0 << 0;
		return 0;
	}
	cout << 1;
	if ((hzt[2] <= 'C' && yzh[2] >= 'D' ) || (hzt[2] >= 'D' && yzh[2] <= 'C')) {
		cout << 0 << 0;
		return 0;
	}
	cout << 1;
	if (abs(hzt[2] - yzh[2] ) == 1)
		cout << 1;
	else
		cout << 0 ;
	return 0;
}
