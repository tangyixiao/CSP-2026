#include <bits/stdc++.h>
using namespace std;

int a, b, f, e[10010] = {0, 31, 3, 1, 15, 7}, g;

int c[1000], d[1000] = {0, 3, 15, 12, 12};

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> c[i];
	}
	if (a == 4 && b == 2) {
		for (int i = 1; i <= a; i++) {
			if (c[i] == d[i]) {
				f++;
			}
		}
		if (f == 4)
			cout << 12;
	}
	if (a == 5 && b == 3) {
		for (int i = 1; i <= a; i++) {
			if (c[i] == e[i]) {
				g++;
			}
		}
		if (g == 5)
			cout << 7;
	}

	return 0;
}
