#include <bits/stdc++.h>
#define ll long long
using namespace std;
string c1, s1, c2, s2, t1, t2;
char a1, a2;

signed main(void) {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	t1 = s1.substr(0, 2);
	t2 = s2.substr(0, 2);
	a1 = s1[2];
	a2 = s2[2];
	if (c1 == c2)
		cout << 1;
	else
		cout << 0;
	if (c1 == c2 && t1 == t2)
		cout << 1;
	else
		cout << 0;
	if (c1 == c2 && t1 == t2 && (a1 <= 'C' && a2 <= 'C' || a1 > 'C' && a2 > 'C'))
		cout << 1;
	else
		cout << 0;
	if (c1 == c2 && t1 == t2 && (a1 <= 'C' && a2 <= 'C' || a1 > 'C' && a2 > 'C') && (a1 - 1 == a2 || a1 + 1 == a2))
		cout << 1;
	else
		cout << 0;
	return 0;
}
