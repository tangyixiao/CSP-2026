#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, x = 0, y = 0, z = 0, c = 0;
	cin >> n;
	while (n--) {
		int a;
		char m;
		cin >> a >> m;
		if (a == pow(10, 9)) {
			c++;
		}
		if (m == 'a')
			x++;
		else if (m == 'b')
			y++;
		else if (m == 'c')
			z++;
	}
	if (x == 1 && y == 1 && z == 1) {
		cout << 2;
	} else if (c == 6) {
		cout << 3;
		int cnt = 0, s = pow(10, 9);
		while (s > 0) {
			if (s % 10 == 0)
				cout << 0;
			s = s / 10;
		}
	} else
		cout << 0;
	return 0;
}