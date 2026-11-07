#include <bits/stdc++.h>
#define int long long
using namespace std;
string ca, sa, cb, sb;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ca >> sa >> cb >> sb;
	if (ca == cb) {
		cout << 1;
		if (sa[0] == sb[0] && sa[1] == sb[1]) {
			cout << 1;
			if (sa[2] == 'A' && (sb[2] == 'B' || sb[2] == 'C') || sa[2] == 'B' && (sb[2] == 'A' || sb[2] == 'C') || sa[2] == 'C'
			        && (sb[2] == 'B' || sb[2] == 'A')) {
				cout << 1;
				if (sa[2] == 'A' && sb[2] == 'B' || sa[2] == 'B' && sb[2] == 'C') {
					cout << 1;
					return 0;
				} else
					cout << 0;
				return 0;
			} else if (sa[2] == 'D' && sb[2] == 'F' || sa[2] == 'F' && sb[2] == 'D') {
				cout << 1 << 1;
				return 0;
			} else {
				cout << 0 << 0;
				return 0;
			}
		} else
			cout << 0 << 0 << 0;
		return 0;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}

	return 0;
}



