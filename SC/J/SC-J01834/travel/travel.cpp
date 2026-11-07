#include <bits/stdc++.h>
using namespace std;


signed main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		int a = 1 * (s1[0] - '0') + 1 * (s1[1] - '0');
		int b = 1 * (s2[0] - '0') + 1 * (s2[1] - '0');
		if (a == b) {
			cout << "1" ;
			char cc1 = s1[2], cc2 = s2[2];
			if (('A' <= cc1 && cc1 <= 'C' && 'A' <= cc2 && cc2 <= 'C')) {
				cout << "1" ;
				if (abs ( int (cc1 - cc2) ) == 1 ) cout << "1";
				else cout << "0";
			} else if (('D' <= cc1 && cc1 <= 'F' && 'D' <= cc2 && cc2 <= 'F')) cout << "11";
			else cout << "00" ;
		} else cout << "000";
	} else cout << "0000" ;
	return 0;
}