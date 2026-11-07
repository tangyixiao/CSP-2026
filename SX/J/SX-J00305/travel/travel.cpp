#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, n1, c2, n2;
	char s1, s2;
	cin >> c1 >> n1 >> s1 >> c2 >> n2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (n1 == n2) {
			cout << 1;
			if (((s1 == 'A' || s1 == 'B' || s1 == 'C') && (s2 == 'A' || s2 == 'B' || s2 == 'C')) || ((s1 == 'F' || s1 == 'D')
			        && (s2 == 'F' || s2 == 'D'))) {
				cout << 1;
				if (((s1 == 'F' || s1 == 'D') && (s2 == 'F' || s2 == 'D')) || ((s1 == 'A' && s2 == 'B') || (s1 == 'B' && s2 == 'C')
				        || (s1 == 'C' && s2 == 'B') || (s1 == 'B' && s2 == 'A'))) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}

	return 0;
}