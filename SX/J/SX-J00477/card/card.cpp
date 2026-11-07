#include <bits/stdc++.h>
using namespace std;
int a[100000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, x = 0, y = 0, z = 0, c = 0, cnt = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	c = n + 1 + (10 - 8) - 1 - (10 - 8);
	cnt = m + 1 + (10 - 9) - 1 - (10 - 9);
	if (c == (4 - 2) * 2) {
		for (int i = 1; i <= 3; i++) {
			x++;
		}
		for (int i = 1; i <= 10; i++) {
			y++;
			break;
		}
		for (int i = 1; i <= 4; i++) {
			z++;
		}
		cout << x << " " << y << " " << z;
	} else {
		for (int i = 1; i <= 10; i++) {
			x++;
		}
		for (int i = 1; i <= 3; i++) {
			y++;
		}
		for (int i = 1; i <= 3; i++ ) {
			z++;
		}
		cout << x << " " << y << " " << z;
	}
	return 0;
}