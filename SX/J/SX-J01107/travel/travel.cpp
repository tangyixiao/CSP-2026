#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
string ans;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans[1] = '1';
	} else {
		ans[1] = '0';
	}
	if (ans[1] == '1' && s1[0] == s2[0] && s1[1] == s2[1]) {
		ans[2] = '1';
	} else {
		ans[2] = '0';
	}
	if (ans[1] == '1' && ans[2] == '1' && ((s1[2] < 'D' && s2[2] < 'D') || (s1[2] >= 'D' && s2[2] >= 'D'))) {
		ans[3] = '1';
	} else {
		ans[3] = '0';
	}
	int x25 = s1[2] - '0';
	int x35 = s2[2] - '0';
	if (ans[1] == '1' && ans[2] == '1' && ans[3] == '1' && abs(x25 - x35) == 1) {
		ans[4] = '1';
	} else {
		ans[4] = '0';
	}
	for (int i = 1; i <= 4; i++) {
		cout << ans[i];
	}
	return 0;
}