#include <bits/stdc++.h>
using namespace std;
string ans;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		if ((s1[0] == s2[0]) && (s1[1] == s2[1])) {
			if (s1 > s2)
				swap(s1, s2);
			if ((s2[2] <= 'C') || (s1[2] >= 'D')) {
				if (s1[2] >= 'D')
					ans = "1111";
				else if ((int)(s2[2]) - (int)(s1[2]) == 1)
					ans = "1111";
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
