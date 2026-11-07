#include <bits/stdc++.h>
using namespace std;
bool f = 1;
string s1, s2, t1, t2;
int main () {
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	cin >> s1 >> s2 >> t1 >> t2;
	if (s1 != t1) {
		cout << 0;
		f = 0;
	} else cout << 1;
	int x = (s2[0] - '0') * 10 + (s2[1] - '0');
	int y = (t2[0] - '0') * 10 + (t2[1] - '0');
	if (x != y || f == 0) {
		cout << 0;
		f = 0;
	} else cout << 1;
	if ((s2[2] <= 'C' && t2[2] >= 'D') || (t2[2] <= 'C' && s2[2] >= 'D') || f == 0) {
		cout << 0;
		f = 0;
	} else cout << 1;
	if (f == 0 || (fabs (s2[2] - t2[2]) != 1)) {
		cout << 0;
		f = 0;
	} else cout << 1;
	return 0;
}