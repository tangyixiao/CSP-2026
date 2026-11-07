#include <bits/stdc++.h>
using namespace std;
int sum, sum1;
string s, s1;

signed main() {
	freopen("treavl.in", "r", stdin);
	freopen("treavl.out", "w", stdout);
	cin >> sum >> s >> sum1 >> s1;
	if (sum == sum1)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}

	if (s[1] == s1[1])
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if ((s[2] >= 'A' && s[2] <= 'C') && (s1[2] >= 'A' && s1[2] <= 'C') || (s[2] == 'D' && s1[2] == 'F') || (s[2] == 'F'
	        && s1[2] == 'D'))
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if (s[2] + 1 == s1[2] || s[2] - 1 == s1[2])
		cout << 1;
	else
		cout << 0;
	return 0;
}
