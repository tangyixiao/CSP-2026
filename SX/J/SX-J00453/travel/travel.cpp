#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r"stdin);
	freopen("travel.out","w",stdout);
	string c1, s1, c2, s2, a = "", b = "";
	char  c, d;
	cin >> c1 >> s1 >> c2 >> s2;
	a += s1[0] + s1[1];
	b += s2[0] + s2[1];
	c = s1[2];
	d = s2[2];
	if ( c1 == c2)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (a == b)
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if ((c >= 'A' ) && (c <= 'C' ) && (d >= 'A') && (d <= 'C' ) || (c >= 'D') && (c <= 'F') && (d >= 'D') && (d <= 'F'))
		cout << "1";
	else {
		cout << "00";
		return 0;
	}
	if (c == d + 1 || d == c + 1)
		cout << "1";
	else {
		cout << "0";
		return 0;
	}
	return 0;
}
