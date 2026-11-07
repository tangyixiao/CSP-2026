#include <bits/stdc++.h>
using namespace std;

int main() {
	string c1, s1, c2, s2;
	int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0, num1, num2;
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans1 = 1;
		num1 = s1[0] - '0' * 10 + s1[1] - '0', num2 = s2[0] - '0' * 10 + s2[1] - '0';
		if (num1 == num2) {
			ans2 = 1;
			if ((s1[2] - 'A' <= 2 && s2[2] - 'A' <= 2) || (s1[2] - 'A' > 2 && s2[2] - 'A' > 2)) {
				ans3 = 1;
				if (s1[2] - 'A' == s2[2] - 'A' + 1 || s1[2] - 'A' == s2[2] - 'A' - 1) {
					ans4 = 1;
				}
			}
		}
	}
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}