#include <bits/stdc++.h>
using namespace std;
string c, cc, s, ss, a, b;
char bs, as;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> c >> s >> cc >> ss;
	if (c != cc) {
		cout << "0000";
	} else {
		cout << 1;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != 'A' && s[i] != 'B' && s[i] != 'C' && s[i] != 'D' && s[i] != 'F') {
				a += s[i];
			} else {
				as = s[i];
			}
		}
		for (int i = 0; i < ss.size(); i++) {
			if (ss[i] != 'A' && ss[i] != 'B' && ss[i] != 'C' && ss[i] != 'D' && ss[i] != 'F') {
				b += ss[i];
			} else {
				bs = ss[i];
			}
		}
		if (a != b) {
			cout << "000";
		} else {
			cout << 1;
			if (abs(int(as) - int(bs)) > 2  || (as == 'C' && bs == 'D' ) || (as == 'D' && bs == 'C') ) {
				cout << "00";
			} else {
				cout << 1;
				if (abs(int(as) - int(bs)) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			}
		}
	}
	return 0;
}
