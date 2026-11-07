#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	char a[200010];
	int z, f = 0, g = 0, h = 0;
	cin >> z;
	for (int i = 1; i <= z; i++) {
		int d;
		char q;
		cin >> d >> q;
		for (int j = 1 + f; j <= d + f; j++) {
			a[j] = q;
			g++;
		}
		f += d;
	}
	for (int i = 1; i <= g / 2 + 1; i++) {
		if (a[i] == a[g + 1 - i]) {
			h++;
		}
	}
	cout << (g - h) / 2 ;


	return 0;
}
