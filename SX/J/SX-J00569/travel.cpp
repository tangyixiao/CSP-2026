#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	int a, b;
	a = s1[0] * 10 + s1[1];
	b = s2[0] * 10 + s2[1];
	if (a == b) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
		if (s1[2] == 'D' || s2[2] == 'F')
			cout << 1;
		if (abs(s1[2] + s1[2] <= 2))
			cout << 1;
		else
			cout << 0 << 0;
	}
	return 0;
}