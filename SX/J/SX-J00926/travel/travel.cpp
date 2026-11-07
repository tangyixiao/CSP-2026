#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;
int ans;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a == c) {
		ans += 1000;
		if (b[0] == d[0] && b[1] == d[1]) {
			ans += 100;
			if ((b[2] <= 'C' && d[2] <= 'C') || (b[2] >= 'D' && d[2] >= 'D')) {
				ans += 10;
				if (b[2] - d[2] == 1 || b[2] - d[2] == -1)
					ans += 1;
			}
		}
	}
	if (ans == 0)
		cout << "0000";
	else
		cout << ans;
	return 0;
}
