#include <bits/stdc++.h>
#define int long long
using namespace std;
string c1, s1, c2, s2;
const int N = 1e6+10;
bool f1, f2;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		f1 = 1;
		cout << 1;
	} else
		cout << 0;
	if (s1[0] == s2[0] && s1[1] == s2[1] && f1) {
		f2 = 1;
		cout << 1;
	} else
		cout << 0;
	if (f2 && ((s1[2] == 'A' && s2[2] == 'B') || (s2[2] == 'A' && s1[2] == 'B') || (s1[2] == 'F' && s2[2] == 'D')
	           || (s2[2] == 'F' && s1[2] == 'D') || (s1[2] == 'C' && s2[2] == 'B') || (s2[2] == 'C' && s1[2] == 'B')))
		cout << 11;
	else if (f2 && ((s1[2] == 'A' && s2[2] == 'C') || (s2[2] == 'A' && s1[2] == 'C')) ) {
		cout << 10;
	} else
		cout << "00";
	return 0;
}
