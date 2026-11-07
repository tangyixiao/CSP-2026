#include <bits/stdc++.h>
using namespace std;
string s1, s2, c1, c2, ans;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	ans += (c1 == c2 ? '1' : '0');
	//cout << ans << '\n';
	string ss1, ss2;
	ss1 += s1[0];
	ss1 += s1[1];
	ss2 += s2[0];
	ss2 += s2[1];
	//cout << ss1 << ss2;
	if (ans[0] == '1')
		ans += (ss1 == ss2 ? '1' : '0');
	else
		ans += '0';
	//cout << ans << '\n';
	char sss1 = s1[2], sss2 = s2[2];
	if (ans[1] == '1') {
		if ((sss1 <= 'C' && sss2 <= 'C') || (sss1 > 'C' && sss2 > 'C')) {
			ans += '1';
			if (abs(sss1 - sss2) == 1)
				ans += '1';
			else
				ans += '0';
		}
	} else {
		ans += '0';
		ans += '0';
	}
	cout << ans;
	return 0;
}
