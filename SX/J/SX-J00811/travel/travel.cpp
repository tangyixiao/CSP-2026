#include <bits/stdc++.h>
using namespace std;
string r1, r2, x1, x2, ans = "0000";
int r, x, l;
bool f[3];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r1 >> r2 >> x1 >> x2;
	r = int(r2[2]);
	x = int(x2[2]);
	if (r1 == x1) {
		f[0] = true;
		if (x2[0] == r2[0] && x2[1] == r2[1]) {
			f[1] = true;
			if ((x2[2] <= 67 && r2[2] <= 67) || (x2[2] > 67 && r2[2] > 67)) {
				f[2] = true;
				l = r - x;
				if (l * l == 1) {
					f[3] = true;
				}
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		if (f[i]) {
			ans[i] = '1';
		}
	}
	cout << ans;
	return 0;
}
