#include <bits/stdc++.h>
using namespace std;
#define int long long
string s1, s2;
int c1, c2;
bool flag = 1;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
		flag = 0;
	}
	if (s1[0] == s2[0] and s1[1] == s2[1] and flag) {
		cout << 1;
	} else {
		cout << 0;
		flag = 0;
	}
	if (((s1[2] <= 'C' and s2[2] <= 'C') or (s1[2] > 'C' and s2[2] > 'C')) and flag) {
		cout << 1;
	} else {
		cout << 0;
		flag = 0;
	}
	if (flag and !((s1[2] == 'C' and s2[2] == 'D') or (s1[2] == 'D' and s2[2] == 'C')) and (!((s1[2] == 'A'
	        and s2[2] == 'C') or (s1[2] == 'C' and s2[2] == 'A')))) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}