#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2, bs = "";
bool csis[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		csis[1] = 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			csis[2] = 1;
			if ((s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || (s1[2] >= 'D' && s1[3] <= 'F' && s2[3] >= 'D'
			        && s2[2] <= 'F')) {
				csis[3] = 1;
				if (s1[2] == char(s2[2] + 1) || s1[2] == char(s2[2] - 1)) {
					csis[4] = 1;
				}
			}
		}
	}

	for (int i = 1; i <= 4; i++) {
		bs = bs + char(csis[i] + '0');
	}
	cout << bs;
	return 0;
}