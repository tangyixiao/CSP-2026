#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;
int f1 = 0, f2 = 0, f3 = 0, f4 = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		f1 = 1;
	else {
		cout << f1 << f2 << f3 << f4;
		return 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1])
		f2 = 1;
	else {
		cout << f1 << f2 << f3 << f4;
		return 0;
	}
	if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s1[2] == 'D'
	        || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F'))) {
		f3 = 1;
	} else {
		cout << f1 << f2 << f3 << f4;
		return 0;
	}
	char a = s1[2], b = s2[2];
	if ((a <= 'C' && abs(a - b) == 1) || (a >= 'D' && abs(a - b) == 2))
		f4 = 1;
	cout << f1 << f2 << f3 << f4;
	return 0;
}
