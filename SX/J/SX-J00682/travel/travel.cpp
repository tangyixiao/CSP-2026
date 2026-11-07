#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	string s5, s6;
	s5 = {s2[0], s2[1]};
	s6 = {s4[0], s4[1]};
	cout << (s1 == s3);
	cout << (s1 == s3 && s5 == s6);
	cout << (s1 == s3 && s5 == s6 && ((s2[2] <= 'C' && s4[2] <= 'C') || (s2[2] > 'C' && s4[2] > 'C')));
	cout << (s1 == s3 && s5 == s6 && ((s2[2] <= 'C' && s4[2] <= 'C') || (s2[2] > 'C' && s4[2] > 'C'))
	         && abs(s2[2] - (s4[2])) == 1);
	return 0;
}
