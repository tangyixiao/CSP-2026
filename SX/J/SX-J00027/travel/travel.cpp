#include <bits/stdc++.h>

using namespace std;

string s1, s2, s3, s4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 != s3) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
	}
	for (int i = 0; i <= 1; i ++) {
		if (s2[i] != s4[i]) {
			cout << "000";
			return 0;
		}
	}
	cout << 1;
	if ((s2[2] <= 'C' && s4[2] <= 'C') || (s2[2] >= 'D' && s4[2] >= 'D')) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if ((s2[2] <= 'C' && s4[2] >= 'D') || (s4[2] <= 'C' && s2[2] >= 'D')) { // 在两边
		cout << 0;
		return 0;
	} else if ((((int)s2[2] + 1 == s4[2]) || ((int)s4[2] + 1 == s2[2])) || ((s2[2] == 'D' && s4[2] == 'F') || (s4[2] == 'D'
	           || s2[2] == 'F'))) { // 两人在一起
		cout << 1 ;
	} else {
		cout << 0;
	}
	return 0;
}
