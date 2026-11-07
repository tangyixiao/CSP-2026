#include <bits/stdc++.h>
using namespace std;
#define int long long
int a;
int c1, c2, pos1, pos2;
string s1, s2;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	pos1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	pos2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	if (pos1 == pos2) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'B' && s2[2] == 'C')
	        || (s2[2] == 'A' && s1[2] == 'B') || (s2[2] == 'A' && s1[2] == 'C') || (s2[2] == 'B' && s1[2] == 'C')
	        || (s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F'))
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C') || (s2[2] == 'A' && s1[2] == 'B') || (s2[2] == 'B'
	        && s1[2] == 'C')
	        || (s1[2] == 'D' && s2[2] == 'F') || (s2[2] == 'D' && s1[2] == 'F'))
		cout << 1;
	else
		cout << 0;

	return 0;

}
