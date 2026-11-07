#include <bits/stdc++.h>
using namespace std;
int a1, a2, a3, l, a4 ;
string s1, s2, c1, c2;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (s1[1] == s2[1] && s1[0] == s1[0])
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if ((s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F'
	        && s2[2] == 'D')))
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if (int(s1[2]) + 1 == int(s2[2]) || int(s1[2]) - 1 == int(s2[2]))
		cout << 1;
	else
		cout << 0;
	return 0;
}
