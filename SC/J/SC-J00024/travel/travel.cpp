#include <bits/stdc++.h>

#define int long long

using namespace std;

string c1, s1, c2, s2;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> c1 >> s1 >> c2 >> s2;

	char pi_1 = s1[1], pi_2 = s2[1];
	char flag_1 = s1[2], flag_2 = s2[2];

	if (c1 == c2) {
		cout << 1;
	} else cout << 0;

	if (c1 == c2 && pi_1 == pi_2) {
		cout << 1;
	} else cout << 0;

	if (c1 == c2 && pi_1 == pi_2 && ((flag_1 >= 'D' && flag_2 >= 'D') || (flag_1 <= 'C' && flag_2 <= 'C'))) {
		cout << 1;
	} else cout << 0;

	if (c1 == c2 && pi_1 == pi_2 && ((flag_1 >= 'D' && flag_2 >= 'D') || (flag_1 <= 'C' && flag_2 <= 'C')) &&
	        abs(flag_1 - flag_2) == 1) {
		cout << 1;
	} else cout << 0;
	
	return 0;
}