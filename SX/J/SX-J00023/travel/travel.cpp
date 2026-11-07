#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c1, c2, s1, s2;
	char s_1, s_2;
	cin >> c1 >> s1 >> s_1 >> c2 >> s2 >> s_2;
	if (c1 == c2)
		cout << 1;
	else
		cout << 0;
	if ( s1 == s2 && c1 == c2) {
		cout << 1;
	} else
		cout << 0;
	if (s_1 >= 'D' && s_2 >= 'D' && c1 == c2)
		cout << 1;
	else if (s_1 <= 'C' && s_2 <= 'C' && c1 == c2)
		cout << 1;
	else
		cout << 0;
	if (s1 + 1 == s2 && s_1 == s_2)
		cout << 1;
	else if (s1 - 1 == s2 && s_1 == s_2)
		cout << 1;
	else if (s1 == s2 && s_1  - 1 == s_2)
		cout << 1;
	else if (s1 == s2 && s_1  + 1 == s_2)
		cout << 1;
	else
		cout << 0;
	return 0;
}