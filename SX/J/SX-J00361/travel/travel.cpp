#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		cout << 1;
		int i1 = s1[2], i2 = s2[2];
		if (i1 <= 67 && i2 <= 67) {
			cout << 1;
			if (i1 + 1 == i2 || i2 + 1 == i1)
				cout << 1;
			else
				cout << 0;
		} else if (i1 >= 68 && i2 >= 68) {
			cout << 1;
			if (i1 + 2 == i2 || i2 + 2 == i1)
				cout << 1;
			else
				cout << 0;
		} else
			cout << 0 << 0;

	} else
		cout << 0 << 0 << 0;
	return 0;
}
