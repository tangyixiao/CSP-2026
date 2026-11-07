#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2, s, ss;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	cout << 1 ;
	for (int i = 0; i < 2; i++) {
		s = s + s1[i];
		ss = ss + s2[i];
	}
	if (s != ss) {
		cout << "000";
		return 0;
	}
	cout << "1";
	if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}