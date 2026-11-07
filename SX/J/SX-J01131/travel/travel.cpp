#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2, n;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		n = '1';
	else
		n = '0';
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1])
		n = n + '1';
	else
		n = n + '0';
	bool f1 = s1[2] <= 'C' ? true : false, f2 = s2[2] <= 'C' ? true : false;
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && f1 == f2 )
		n = n + '1';
	else
		n = n + '0';

	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && f1 == f2 && (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) )
		n = n + '1';
	else
		n = n + '0';

	cout << n;

	return 0;
}