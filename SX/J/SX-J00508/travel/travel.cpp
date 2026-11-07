#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	int c1 = 0, c2 = 0;
	string s1, s2, ans;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		if (s1[0] + s1[1] == s2[0] + s2[1]) {
			if ((s1[2] - 'A' <= 2 && s2[2] - 'A' <= 2) || (s1[2] - 'A' >= 3 && s2[2] - 'A' >= 3)) {
				if (abs((s1[2] - 'A') - (s2[2] - 'A')) == 1) {
					ans = "1111";
				} else {
					ans = "1110";
				}
			} else {
				ans = "1100";
			}
		} else
			ans = "1000";
	} else {
		ans = "0000";
	}
	cout << ans;
	return 0;
}
