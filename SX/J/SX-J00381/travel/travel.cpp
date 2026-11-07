#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (s1[0] == s2[0]  and s1[1] == s2[1] and s1[2] != s2[2]) {
		cout << 1;
	} else if (s1[0] == s2[0]  and s1[1] != s2[1] and s1[2] != s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] == s2[1] and s1[2] != s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] != s2[1] and s1[2] != s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] == s2[0]  and s1[1] == s2[1] and s1[2] != s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] == s2[0]  and s1[1] != s2[1] and s1[2] != s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] == s2[1] and s1[2] != s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] != s2[1] and s1[2] != s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] == s2[0]  and s1[1] == s2[1] and s1[2] != s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] == s2[0]  and s1[1] != s2[1] and s1[2] == s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] == s2[1] and s1[2] == s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] != s2[1] and s1[2] == s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] == s2[0]  and s1[1] == s2[1] and s1[2] == s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] == s2[0]  and s1[1] != s2[1] and s1[2] == s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] == s2[1] and s1[2] == s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] != s2[0]  and s1[1] != s2[1] and s1[2] == s2[2] and s1[2] < 'D' and s2[2] < 'D') {
		cout << "010";
		return 0;
	} else if (s1[0] == s2[0]  and s1[1] == s2[1] and s1[2] == s2[2] and s1[2] > 'D' and s2[2] > 'D') {
		cout << "010";
		return 0;
	} else {
		cout << "000";
		return 0;
	}

	if (s1[0] == s2[0]  and s1[1] == s2[1] and s1[2] != s2[2]) {
		if (s1[2] == 'A' and s2[2] == 'B' ) {
			cout << 1;
		} else if (s1[2] == 'B' and s2[2] == 'A') {
			cout << 1;
		} else if (s1[2] == 'C' and s2[2] == 'B') {
			cout << 1;
		} else if (s1[2] == 'B' and s2[2] == 'C') {
			cout << 1;
		} else if (s1[2] == 'D' and s2[2] == 'F') {
			cout << 1;
		} else if (s1[2] == 'F' and s2[2] == 'D') {
			cout << 1;
		} else if (s1[2] == 'A' and s2[2] == 'C') {
			cout << 1;
		} else if (s1[2] == 'C' and s2[2] == 'A') {
			cout << 1;
		} else {
			cout << 0;
		}
		if (s1[2] == 'A' and s2[2] == 'B') {
			cout << 1;
		} else if (s1[2] == 'B' and s2[2] == 'A') {
			cout << 1;
		} else if (s1[2] == 'C' and s2[2] == 'B') {
			cout << 1;
		} else if (s1[2] == 'B' and s2[2] == 'C') {
			cout << 1;
		} else if (s1[2] == 'D' and s2[2] == 'F') {
			cout << 1;
		} else if (s1[2] == 'F' and s2[2] == 'D') {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << "00";
	}
	return 0;
}
