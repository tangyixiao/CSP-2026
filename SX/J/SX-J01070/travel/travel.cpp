#include <bits/stdc++.h>
using namespace std;

string n;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1[1] == c1[8] && c1[0] == c1[7]) {
		return 1;
	} else {
		return 0;
	}
	if (c1[3] == c1[10] && c1[4] == c1[11]) {
		return 1;
	} else {
		return 0;
	}
	for (int i = 0; i <= c1[i]; i++) {
		c1[i] = c1[i] - 0;



	}
	if (c1[5] != c1['D'] && c1[12] != c1['D'] || c2[5] != c2['D'] && c2[12] != c2['D']) {
		return 1;
	} else {
		return 0;
	};
	if (c1[5] == c1[12] + 1 && c1[12] == c1[5] + 1) {

		return 1;

	} else {
		return 0;
	}






	return 0;
}
