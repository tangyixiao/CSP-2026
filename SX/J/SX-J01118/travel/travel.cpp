#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	bool a = false, b = false, c = false, d = false;
	if (c1 == c2) {
		a = true;
	} else {
		cout << "0000";
		return 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		b = true;
	} else {
		cout << "1000";
		return 0;
	}
	if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) {
		c = true;
	} else {
		cout << "1100";
		return 0;
	}
	int t = abs(s1[2] - s2[2]);
	if (t == 1) {
		cout << "1111";
	} else {
		cout << "1110";
	}
	return 0;
}
