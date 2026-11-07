#include <bits/stdc++.h>
using namespace std;
char s1[13], s2[13];
char c1[12], c2[12];
bool z[14];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int q = 0, w = 0, e = 0, r = 0;
	int t, y;
	t = s1[2];
	y = s2[2];

	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i <= 1; i++) {
		if (c1[i] == c2[i]) {
			q++;
		}
		if (s1[i] == s2[i]) {
			w++;
		}
	}

	if (int(t) <= 67 || int(t) <= 65) {
		if (int(y) <= 67 || int(y) >= 65) {
			e++;
		}
	}
	if (int(t) <= 70 || (int(t) <= 68)) {
		if (int(y) <= 70 || int(y) >= 68) {
			e++;
		}

	}
	if (((y++) == t) || ((t++) == (y))) {
		if ((t > y && y != 67) || (y > t && t != 67) ) {
			r++;
		}

	} else if ((y == 68 && t == 70 ) && (t == 68 && y == 70 ) ) {

		r++;
	}


	if (q == 2) {
		z[1] = 1;
		if (w == 2) {
			z[2] = 1;
			if (e != 1) {
				z[3] = 1;
				if (r == 1) {
					z[4] = 1;
				}
			}
		}
	}

	for (int i = 1; i <= 4; i++) {
		cout << z[i];
	}
	return 0;
}
