#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;

	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	long long t = 1;
	for (long long i = 0; i < 2; i++) {
		if (s1[i] != s2[i]) {
			t = 0;
		}
	}
	if (!t) {
		cout << "000";
		return 0;
	} else {
		cout << 1;
	}
	if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	long long t1 = 0;
	if ((s1[2] == 'A' && s2[2] == 'B') || (s2[2] == 'A' && s1[2] == 'B')) {
		cout << 1;
		t1 = 1;
	}
	if ((s1[2] == 'B' && s2[2] == 'C') || (s2[2] == 'B' && s1[2] == 'C')) {
		cout << 1;
		t1 = 1;
	}
	if ((s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F')) {
		cout << 1;
		t1 = 1;
	}
	if (!t1)
		cout << 0;
	return 0;
}
