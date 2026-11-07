#include <bits/stdc++.h>
using namespace std;
int c1, c2;
char s1[10], s2[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1;
	int i = 1;
	while (cin >> s1[i]) {
		i++;
		if (i == 4) {
			break;
		}
	}
	cin >> c2;
	i = 1;
	while (cin >> s2[i]) {
		i++;
		if (i == 4) {
			break;
		}
	}
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if ((s1[1] == s2[1]) && (s1[2] == s2[2])) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (((s1[3] == 'A') && (s2[3] == 'B')) || ((s1[3] == 'B') && (s2[3] == 'C')) || ((s1[3] == 'D') && (s2[3] == 'F'))||((s1[3] == 'B') && (s2[3] == 'A')) || ((s1[3] == 'C') && (s2[3] == 'B')) || ((s1[3] == 'F') && (s2[3] == 'D'))) {
		cout << "11";
		return 0;
	} else if (((s1[3] == 'A') && (s2[3] == 'C')) || ((s1[3] == 'C') && (s2[3] == 'A'))) {
		cout << "10";
		return 0;
	} else {
		cout << "00";
		return 0;
	}
	return 0;
}
