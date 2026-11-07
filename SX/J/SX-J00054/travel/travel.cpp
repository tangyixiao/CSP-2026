#include <bits/stdc++.h>
#define int long long
using namespace std;
int c1, c2, s1, s2;
char ss1, ss2;
string ans;

signed main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> ss1 >> c2 >> s2 >> ss2;
	if (c1 == c2) {
		ans += '1';
		if (s1 == s2) {
			ans += '1';
			if (ss1 <= 'C' and ss2 <= 'C') {
				ans += '1';
				if (abs(ss1 - ss2) == 1)
					ans += '1';
				else
					ans = "1110";
			} else if (ss1 >= 'D' and ss2 >= 'D') {
				ans += '1';
				if (abs(ss1 - ss2) == 1)
					ans += '1';
				else
					ans = "1110";
			} else
				ans = "1100";
		} else
			ans = "1000";
	} else
		ans = "0000";
	cout << ans;

	return 0;
}