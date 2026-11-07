#include <bits/stdc++.h>
using namespace std;

int mian() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a, b, e, f = 1;
	int  g, h;
	cin >> a;
	string c, d1;
	for (int i = 1; i <= a; i++) {
		cin >> b;
		cin >> c;
		for (int j = 1; j <= b; j++) {
			d1 += c;
			e += b;
		}
	}
	g = b;
	while (f < g) {
		if (d1[f] == d1[g]) {
		} else {
			h++;
		}
		f++;
		g--;

	}
	cout << h;
	return 0;
}
