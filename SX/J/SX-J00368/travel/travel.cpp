#include <bits/stdc++.h>
using namespace std;
char s1[5], s2[5], c1[3], c2[3];
bool a[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (int i = 1; i <= 2; i++) {
		cin >> c1[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> s1[i];
	}
	for (int i = 1; i <= 2; i++) {
		cin >> c2[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> s2[i];
	}
	if (c1[1] == c2[1] && c1[2] == c2[2]) {
		a[1] = 1;
		if (s1[1] == s2[1] && s1[2] == s2[2]) {
			a[2] = 1;
			if (s1[3] <= 'C' && s2[3] <= 'C') {
				a[3] = 1;
				if ((s1[3] == 'A' && s2[3] == 'B') || (s1[3] == 'B' && s2[3] == 'A') || (s1[3] == 'B' && s2[3] == 'C' )
				        || (s1[3] == 'C' && s2[3] == 'B')) {
					a[4] = 1;
				}
			} else if (s1[3] >= 'D' && s2[3] >= 'D') {
				a[3] = 1;
				a[4] = 1;
			}
		}
	}
	for (int i = 1; i <= 4; i++) {
		cout << a[i];
	}
	return 0;
}
