#include <bits/stdc++.h>
using namespace std;
int a1, a2, a, b, c, d;
string s1, s2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a1 >> s1 >> a2 >> s2;
	if (a1 == a2) {
		a = 1;
	} else {
		a = 0;
	}
	if (s1[1] == s2[1] && s1[0] == s2[0] && a == 1) {
		b = 1;
	} else {
		b = 0;
	}
	if (((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'E' && s2[2] >= 'E')) && b == 1) {
		c = 1;
	} else {
		c = 0;
	}
	if (c == 1 && abs(s1[2] - s2[2]) == 1) {
		d = 1;
	} else {
		d = 0;
	}
	cout << a << b << c << d;
	return 0;
}
