#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int q = 0;
	if (s1 == s3) {
		cout << 1;
	} else {
		cout << 0;
		q = 1;
	}
	if (s2[0] == s4[0] && s2[1] == s4[1] && q != 1 ) {
		cout << 1;
	} else {
		cout << 0;
		q = 1;
	}
	if (s2[2] - 'A' <= 2 && s4[2] - 'A' <= 2 && q != 1 || s2[2] - 'A' >= 3 && s4[2] - 'A' >= 3 && s2[2] - 'A' <= 4
	        && s4[2] - 'A' <= 4 && q != 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (s2[2] + 1 == s4[2] && s2[2] != 'D' && s4[2] != 'C' && s2[2] != 'C' && s4[2] != 'D' && q != 1 || s4[2] + 1 == s2[2]
	        && s2[2] != 'D' && s4[2] != 'C' && s2[2] != 'C' && s4[2] != 'D' && q != 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
