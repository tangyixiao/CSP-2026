#include <bits/stdc++.h>
using namespace std;
char b[5], d[5];
int a, c;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a;
	cin.get(b, 5);
	cin >> c;
	cin.get(d, 5);
	int ans[4] = {0, 0, 0, 0};
	for (int i = 1; i <= 4; i++) {
		if (a == c) {
			ans[0] = 1;
			if (b[0] == d[0] && b[1] == d[1]) {
				ans[1] = 1;
				if ((b[2] == 'C' && d[2] == 'D' ) || (b[2] == 'D' && d[2] == 'C')) {
				} else {
					ans[2] = 1;
					if (int(b[1]) == int(d[1])  || int(b[1])  == int(d[1])) {
						ans[3] = 1;
					}
				}
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << ans[i];
	}
}
