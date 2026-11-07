#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int h, y, r;
	string b, w;
	cin >> h;
	for (int i = 1; i <= h; i++) {
		cin >> y >> b;
		for (int j = 1; j < y; j++) {
			b = b + w;
		}
	}
	int g = b.size();
	for (int s = 0; s <= g / 2; s++) {
		if (b[s] != b[g + s - 1]) {
			b[g - 1 + s] = b[s];
			r++;
		} else {
			c += 0;
		}
	}
	cout << r;
	return 0;
}
