#include <bits/stdc++.h>
using namespace std;
char f;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	char a[50000000];
	int b, c, d, e, h = 0, g = 0, i ;
	cin >> b;
	for (c = 0; c < b; c++) {
		cin >> d;
		cin >> f;
		for (e = 0; e < d; e++) {
			a[g + e] = f;
		}
		g += d;
	}
	for (i = 0; i < g / 2; i++) {
		if (a[i] != a[g - i - 1]) {
			h++;
		}
	}
	cout << h;
	return 0;
}
