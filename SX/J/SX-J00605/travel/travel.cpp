#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		int x1 = s1[0], y1 = s2[0], x2 = s1[1], y2 = s2[1];
		if (x1 * 10 + x2 == y1 * 10 + y2) {
			cout << "1";
			int wsw = s1[2], wsw1 = s2[2];
			if ((wsw <= 67 and wsw1 <= 67) or (wsw > 67 and wsw1 > 67)) {
				cout << "1";
				int lsy = max(s1[2], s2[2]), waq = min(s1[2], s2[2]);
				if (wsw <= 67 and wsw1 <= 67) {
					if (lsy - waq == 1)
						cout << "1";
					else
						cout << "0";
				} else {
					if (lsy - waq == 2)
						cout << "1";
					else
						cout << "0";
				}
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
