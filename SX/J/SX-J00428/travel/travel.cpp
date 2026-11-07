#include <bits/stdc++.h>
using namespace std;
string s3;
string s4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	s3 = s1[0] + s1[1];
	s4 = s2[0] + s2[1];
	cout << (c1 == c2);
	cout << (c1 == c2&&s3 == s4);
	cout << (c1 == c2&&s3 == s4&&(((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) || ((s1[2] != 'D'
	                              && s1[2] != 'F') && (s2[2] != 'D' && s2[2] != 'F'))));
	cout << (c1 == c2&&s3 == s4&&(abs(s1[2] - s2[2]) == 1 && !((s1[2] == 'D' && s2[2] == 'C') || (s1[2] == 'C'
	                              && s2[2] == 'D'))));

	return 0;
}
