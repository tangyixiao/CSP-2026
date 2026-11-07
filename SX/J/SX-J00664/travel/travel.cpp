#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+66;
string c1, s1, c2, s2, ans;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	string t1 = "", t2 = "";
	for (int i = 0; i < 2; i++) {
		t1 += s1[i];
		t2 += s2[i];
	}
	char ma = max(s1[2], s2[2]), mi = min(s1[2], s2[2]);
	if (c1 == c2) {
		ans += '1';
	} else {
		cout << "0000";
		return 0;
	}
	if (t1 == t2) {
		ans += '1';
	} else {
		ans += '0';
	}
	if (t1 == t2 && ma != 'D' && mi != 'C') {
		if (mi >= 'D' && ma - mi <= 1) {
			ans += '1';
		} else if (ma <= 'C' && ma - mi <= 2) {
			ans += '1';
		} else {
			ans += '0';
		}
	} else {
		ans += '0';
	}
	if (ma != 'D' && mi != 'C' && ma - mi == 1) {
		ans += '1';
	} else {
		ans += '0';
	}
	cout << ans;
	return 0;
}
