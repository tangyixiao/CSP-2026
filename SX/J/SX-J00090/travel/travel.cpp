#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << 0;
	} else {
		cout << 1;
	}
	int l = 0, f = 3;
	for (int i = 0; i <= 1; i++) {
		if (s1[i] == s2[i]) {
			l++;
		}
	}
	if (l == 2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (char(s1[f]) == 'C' && char(s2[f]) == 'D') {
		cout << 0;
	} else if (char(s1[f]) == 'D' && char(s2[f]) == 'C') {
		cout << 0;
	} else {
		cout << 1;
	}
	if (char(s1[f]) == 'A' && char(s2[f]) == 'B') {
		cout << 1;
	} else if (char(s1[f]) == 'B' && char(s2[f]) == 'A') {
		cout << 1;
	} else if (char(s1[f]) == 'B' && char(s2[f]) == 'C') {
		cout << 1;
	} else if (char(s1[f]) == 'C' && char(s2[f]) == 'B') {
		cout << 1;
	} else if (char(s1[f]) == 'A' && char(s2[f]) == 'C') {
		cout << 1;
	} else if (char(s1[f]) == 'C' && char(s2[f]) == 'A') {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
