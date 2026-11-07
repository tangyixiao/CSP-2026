#include <bits/stdc++.h>
using namespace std;
string  s1,  s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int o = 0, h = 0, u = 0, c1, c2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		o = 1;
	} else
		cout << "0";
	if (s1[0] == s2[0] && s1[1] == s2[1] && o == 1) {
		cout << "1";
		h = 1;
	} else
		cout << "0";
	if ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') && o == 1
	        && h == 1) {
		cout << "1";
		u = 1;
	} else if ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F') && o == 1 && h == 1) {
		cout << "1";
		u = 1;
	} else
		cout << "0";
	if (o == 1 && h == 1 && u == 1) {
		if ((int)s1[2] - (int)s2[2] == 1 || (int)s2[2] - (int)s1[2] == 1)
			cout << "1";
		else if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
			cout << "1";
		else
			cout << "0";
	} else
		cout << "0";
	return 0;
}
