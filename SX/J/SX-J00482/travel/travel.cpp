#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d, anss = "0000";
	cin >> a >> b >> c >> d;

	if (a == c) {
		if (a != "01" and c != "16") {
			anss[0] = '1';
		}
	} else {
		cout << anss;
		return 0;
	}

	string h, k, h1, k1;
	h1 = b[2], k1 = d[2];
	for (int i = 0; i < 2; i++) {
		h += b[i];
		k += d[i];
	}

	if (h == k and b != d) {
		anss[1] = '1';
	}

	if (h1 >= "D" and k1 >= "D") {
		anss[2] = '1';
		anss[3] = '1';
		cout << anss;
		return 0;
	}
	if ((h1 >= "A" and h1 <= "C") and (k1 >= "A" and k1 <= "C") and h == k and h1 != k1) {
		anss[2] = '1';
		if (h1 == "B" or k1 == "B") {
			anss[3] = '1';
		}
	}
	cout << anss;
	return 0;
}
