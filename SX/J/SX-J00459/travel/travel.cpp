#include <bits/stdc++.h>
using namespace std;
string c, s, c1, s1;

char q[4] = {'0', '0', '0', '0'};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> c1 >> s1;
	if (c == c1) {
		q[0] = '1';
		if (s[0] == s1[0] && s[1] == s1[1]) {
			q[1] = '1';
			if ((s[2] == 'A' || s[2] == 'B' || s[2] == 'C') && (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C')) {
				q[2] = '1';
				if ((s[2] == 'A' && s1[2] == 'B') || (s[2] == 'B' && s1[2] == 'A') || (s[2] == 'B' && s1[2] == 'C') || (s1[2] == 'B'
				        && s[2] == 'C'))
					q[3] = '1';
			} else if ((s[2] == 'D' || s[2] == 'F') && (s1[2] == 'D' || s1[2] == 'F')) {
				q[2] = '1';
				if ((s[2] == 'D' && s1[2] == 'F') || (s[2] == 'F' && s1[2] == 'D'))
					q[3] = '1';
			}
		}
	}
	cout << q[0] << q[1] << q[2] << q[3];
	fclose(stdin);
	fclose(stdout);
	return 0;
}