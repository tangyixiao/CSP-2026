#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
long long f = 0, p = 0, q = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if ((c1[0] == '0' && c1[1] == '1' ) || (c2[0] == '0' && c2[1] == '1')) {
		return 0;
	}
	if ((c1[0] == '1' && c1[1] == '6' ) || (c2[0] == '1' && c2[1] == '6')) {
		return 0;
	}
	if ((c1[0] >= '2' || (c1[1] >= '8' && c1[0] == '1') ) || (c2[0] == '2' &&  (c2[1] >= '8' && c2[0] == '1') )) {
		return 0;
	}
	if ((s1[0] >= '2' || (s1[0] == '1' && s1[1] >= '9')) ||  (s2[0] >= '2' || (s2[0] == '1' && s2[1] >= '9'))) {
		return 0;
	}
	if (s1[2] != 'A' && s1[2] != 'B' && s1[2] != 'C' && s1[2] != 'D' && s1[2] != 'F') {
		return 0;
	}
	if (s2[2] != 'A' && s2[2] != 'B' && s2[2] != 'C' && s2[2] != 'D' && s2[2] != 'F') {
		return 0;
	}
	if (s1 == s2 && c1 == c2) {
		return 0;
	}
	if (c1 != c2) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	} else {
		cout << 1;
	}
	for (int i = 0; i <= 1; i++) {
		if (s1[i] == s2[i]) {
			f = 1;
		} else {
			f = 0;
		}
	}
	if (f == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')) {
		p = 1;
	} else if ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')  && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) {
		p = 1;
	} else {
		p = 0;
	}
	if (f == 1 && p == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')) {
		q = 1;
	} else if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C')) {
		q = 1;
	} else {
		q = 0;
	}
	if (q == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
