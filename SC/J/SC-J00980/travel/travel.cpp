#include <bits/stdc++.h>
#define int long long

using namespace std;

void solve() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;

	bool flag1 = 1, flag2 = 1, flag3 = 1;

	if (c1 == c2) cout << 1;
	else {
		cout << 0;
		flag1 = 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1] && flag1) cout << 1;
	else {
		cout << 0;
		flag2 = 0;
	}
	if (((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')) && flag1 && flag2) cout << 1;
	else {
		cout << 0;
		flag3 = 0;
	}
	if (((s1[2] - 1 == s2[2]) || (s1[2] + 1 == s2[2])) && flag1 && flag2 && flag3) cout << 1;
	else cout << 0;
}

signed main() {
	solve();
}