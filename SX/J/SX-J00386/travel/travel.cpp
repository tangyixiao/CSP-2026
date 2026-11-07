#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(a,b,c) for(int a=b;a<=c;a++)

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int fl3 = 1, fl4 = 1;
	string c1, s1, c2, s2;
	cin >> c1 >> c2 >> s1 >> s2;
	fr(i, 0, 1) {
		if (c1[i] != s1[i]) {
			cout << "0000";
			return 0;
		}
	}
	fr(i, 0, 1) {
		if (c2[i] != s2[i]) {
			cout << 1000;
			return 0;
		}
	}
	if (c2[2] == 'A' && s2[2] != 'B') {
		fl4 = 0;
	}
	if (c2[2] == 'B' && s2[2] != 'C' && s2[2] != 'A') {
		fl4 = 0;
	}
	if (c2[2] == 'C' && s2[2] != 'B' && s2[2] != 'A') {
		fl3 = 0;
		fl4 = 0;
	}
	if (c2[2] == 'D' && s2[2] != 'F') {
		fl4 = 0;
		fl3 = 0;
	}
	if (s2[2] == 'A' && c2[2] != 'B') {
		fl4 = 0;
	}
	if (s2[2] == 'B' && c2[2] != 'C'  && c2[2] != 'A') {
		fl4 = 0;
	}
	if (s2[2] == 'C' && c2[2] != 'B' && c2[2] != 'A') {
		fl3 = 0;
		fl4 = 0;
	}
	if (s2[2] == 'D' && c2[2] != 'F') {
		fl4 = 0;
		fl3 = 0;
	}
	cout << 1 << 1 << fl3 << fl4;
	return 0;
}
