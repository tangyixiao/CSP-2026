#include <bits/stdc++.h>
using namespace std;
char ss1, ss2;
long long c1, c2, s1, s2, a, b, f = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> ss1 >> c2 >> s2 >> ss2;
	a = ss1 - '0';
	b = ss2 - '0';
	if (c1 == c2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (s1 == s2)
		cout << 1;
	else
		cout << "0";
	if (s1 == s2 && ((ss1 <= 'C' && ss2 <= 'C') || (ss1 >= 'D' && ss2 >= 'D'))) {
		cout << 1;
		f = 1;
	} else
		cout << "0";
	if (abs(a - b) == 1 && s1 == s2 && f)
		cout << 1;
	else
		cout << "0";
	return 0;
}