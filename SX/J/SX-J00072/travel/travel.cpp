#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2, ans;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans += '1';
		if (s1[1] == s2[1]) {
			ans += '1';
			if (s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') {
				ans += '1';
				if (abs(s1[2] - s2[2]) == 1) {
					ans += '1';
				} else {
					ans += '0';
				}
			} else if (s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F') {
				ans += '1';
				if (abs(s1[2] - s2[2]) == 1) {
					ans += '1';
				} else {
					ans += '0';
				}
			} else {
				ans += '0';
				ans += '0';
			}
		} else {
			ans += '0';
			ans += '0';
			ans += '0';
		}
	} else {
		ans = "0000";
	}
	cout << ans;
	return 0;
}
