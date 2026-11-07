#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, s1;
	string c2, s2;
	cin >> c1 >> c2 >> s1 >> s2;
	bool f1, f2, f3, f4;
	f1 = f2 = f3 = f4 = false;
	if (c1 == s1) {
		f1 = true;
	}
	if (f1 && (c2[0] == s2[0] && c2[1] == s2[1])) {
		f2 = true;
	}
	if (f2 && ((c2[2] >= 'D' && s2[2] >= 'D') || (c2[2] <= 'C') && (s2[2] <= 'C'))) {
		f3 = true;
	}
	if (f3 && abs(c2[2] - s2[2]) == 1) {
		f4 = true;
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}
