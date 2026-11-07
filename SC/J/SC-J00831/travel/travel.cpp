#include <bits/stdc++.h>
#define LL long long
using namespace std;
string c1, s1, c2, s2;
string ans = "0000";
bool isside() {
	char x = s1[2], y = s2[2];
	if (x >= 'A' && x <= 'C' && y >= 'A' && y <= 'C') return 1;
	if ((x == 'D' || x == 'F') && (y == 'D' || y == 'F')) return 1;
	return 0;
}
bool ok() {
	char x = s1[2], y = s2[2];
	if (x > y) swap(x, y);
	if (x == 'D' && y == 'F') return 1;
	if (x + 1 == y) return 1;
	return 0;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		ans[0] = '1';
	} else {
		cout << ans; return 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		ans[1] = '1';
	} else {
		cout << ans; return 0;
	}
	if (isside()) {
		ans[2] = '1';
	} else {
		cout << ans; return 0;
	}
	if (ok()) {
		ans[3] = '1';
	}
	cout << ans;
 	return 0;
}