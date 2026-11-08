#include <bits/stdc++.h>

using namespace std;

namespace Code {
	string c1, s1;
	string c2, s2;

	void main() {
		cin >> c1 >> s1 >> c2 >> s2;
		if (c1 == c2) {
			cout << "1";
			char a1 = s1[0], b1 = s1[1];
			char a2 = s2[0], b2 = s2[1];
			if (a1 == a2 && b1 == b2) {
				cout << "1";
				if (s1[2] <= 'C' && s2[2] >= 'D') cout << "00";
				else if (s2[2] <= 'C' && s1[2] >= 'D') cout << "00";
				else {
					cout << "1";
					if (abs(s1[2] - s2[2]) == 1) cout << "1";
					else cout << "0";
				}
			} else cout << "000";
		} else cout << "0000";
	}
}

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Code::main();

	return 0;
}