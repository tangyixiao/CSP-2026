#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
string c1, s1, c2, s2;

int a[5] = {0};

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a[1] = 1;
	} else {
		cout << a[1] << a[2] << a[3] << a[4];
		return 0;
	}
	if ((s1[0] == s2[0]) && (s1[1] == s2[1])) {
		a[2] = 1;
	} else {
		cout << a[1] << a[2] << a[3] << a[4];
		return 0;
	}
	if (s1[2] == 'A') {
		if (s2[2] == 'B') {
			a[3] = 1;
			a[4] = 1;
		}
		if (s2[2] == 'C') {
			a[3] = 1;
			a[4] = 0;
		}
		if (s2[2] == 'D') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'E') {
			a[3] = 0;
			a[4] = 0;
		}
	}
	if (s1[2] == 'B') {
		if (s2[2] == 'A') {
			a[3] = 1;
			a[4] = 1;
		}
		if (s2[2] == 'C') {
			a[3] = 1;
			a[4] = 1;
		}
		if (s2[2] == 'D') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'E') {
			a[3] = 0;
			a[4] = 0;
		}
	}
	if (s1[2] == 'C') {
		if (s2[2] == 'B') {
			a[3] = 1;
			a[4] = 1;
		}
		if (s2[2] == 'A') {
			a[3] = 1;
			a[4] = 0;
		}
		if (s2[2] == 'D') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'E') {
			a[3] = 0;
			a[4] = 0;
		}
	}
	if (s1[2] == 'D') {
		if (s2[2] == 'A') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'B') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'C') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'E') {
			a[3] = 1;
			a[4] = 1;
		}
	}
	if (s1[2] == 'E') {
		if (s2[2] == 'B') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'C') {
			a[3] = 0;
			a[4] = 0;
		}
		if (s2[2] == 'D') {
			a[3] = 1;
			a[4] = 1;
		}
		if (s2[2] == 'A') {
			a[3] = 0;
			a[4] = 0;
		}
	}
	cout << a[1] << a[2] << a[3] << a[4];
	return 0;
}
