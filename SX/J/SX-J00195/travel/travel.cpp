#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string ca, sa, cb, sb, ans;
	int pa, pb;
	cin >> ca >> sa >> cb >> sb;
	if (sa[2] == 'A' || sa[2] == 'B' || sa[2] == 'C')
		pa = 1;
	else
		pa = 0;
	if (sb[2] == 'A' || sb[2] == 'B' || sb[2] == 'C')
		pb = 1;
	else
		pb = 0;
	if (ca == cb) {
		ans = "1000";
		if (sa[0] == sb[0] && sa[1] == sb[1]) {
			ans = "1100";
			if (sa[0] == sb[0] && sa[1] == sb[1] && pa == pb) {
				ans = "1110";
				if (sa[0] == sb[0] && sa[1] == sb[1] && pa == 0 && pb == 0)
					ans = "1111";
				else if ((sa[0] == sb[0] && sa[1] == sb[1] && pa == 1 && pb == 1 && sa[2] - sb[2] == 1) || (sa[0] == sb[0]
				         && sa[1] == sb[1] && pa == 1 && pb == 1 && sb[2] - sa[2] == 1))
					ans = "1111";
			}
		}
	} else
		ans = "0000";
	cout << ans;
	return 0;
}