#include <bits/stdc++.h>
using namespace std;
string c1, c2;
char s1[5], s2[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1;
	for (int i = 1; i <= 3; i++) {
		cin >> s1[i];
	}
	cin >> c2;
	for (int i = 1; i <= 3; i++) {
		cin >> s2[i];
	}
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (s1[1] == s2[1] and s1[2] == s2[2] and c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((s1[1] == s2[1] and s1[2] == s2[2]) and (((s1[3] == 'A' or s1[3] == 'B' or s1[3] == 'C') and (s2[3] == 'A'
	        or s2[3] == 'B' or s2[3] == 'C')) or ((s1[3] == 'D' or s1[3] == 'F') and (s2[3] == 'D' or s2[3] == 'F')))
	        and (c1 == c2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (c1 == c2 and (s1[3] + 1 == s2[3] or s1[3] - 1 == s2[3]) and (s1[1] == s2[1] and s1[2] == s2[2]) and (((s1[3] == 'A'
	        or s1[3] == 'B' or s1[3] == 'C') and (s2[3] == 'A'
	                or s2[3] == 'B' or s2[3] == 'C')) or ((s1[3] == 'D' or s1[3] == 'F') and (s2[3] == 'D' or s2[3] == 'F')))
	        and (c1 == c2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
