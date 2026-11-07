#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;

	string ans = "";

	if (c1 == c2) {
		ans += "1";
	} else {
		ans += "0";
	}

	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2)) {
		ans += "1";
	} else {
		ans += "0";
	}

	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && (('A' <= s1[2] && s1[2] <= 'C' && 'A' <= s2[2] && s2[2] <= 'C') || ('D' <= s1[2] && s1[2] <= 'E' && 'D' <= s2[2] && s2[2] <= 'E'))) {
		ans += "1";
	} else {
		ans += "0";
	}

	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && (abs( (int)s1[2] - (int)s2[2]) == 1 ) && !(s1[2] == 'C' && s2[2] == 'D') ) {
		ans += "1";
	} else {
		ans += "0";
	}

	cout << ans << endl;

	return 0;
}
