#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int s[4];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		s[0] = 1;
	else
		s[0] = 0;
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1])
		s[1] = 1;
	else
		s[1] = 0;
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')))
		s[2] = 1;
	else
		s[2] = 0;
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C'))) {
		if (s1[2] <= 'C' && s2[2] <= 'C') {
			if (abs((s1[2] - '0') - (s2[2] - '0')) == 1) {
				s[3] = 1;
			}
		} else if (s1[2] > 'C' && s2[2] > 'C') {
			s[3] = 1;
		}
	} else
		s[3] = 0;
	for (int i = 0; i < 4; i++) {
		cout << s[i];
	}
	return 0;
}
