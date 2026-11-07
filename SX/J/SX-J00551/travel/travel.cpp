#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2, ans = "";
	cin >> c1 >> s1 >> c2 >> s2;
	int a = s1[2], b = s2[2];
	if (s1[2] == 'D' || s1[2] == 'F')
		a += 1000;
	if (s2[2] == 'D' || s2[2] == 'F')
		b += 1000;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	if (s1.substr(0, 2) != s2.substr(0, 2)) {
		cout << "1000";
		return 0;
	}
	if (abs(a - b) > 2) {
		cout << "1100";
		return 0;
	}
	if ((s1[2] == 'D' && s2[2] == 'F') || ( s2[2] == 'D' && s1[2] == 'F')) {
		cout << "1111";
		return 0;
	}
	if (abs(a - b) != 1) {
		cout << "1110";
		return 0;
	}
	cout << "1111";
	return 0;
}