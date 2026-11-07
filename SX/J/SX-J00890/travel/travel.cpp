#include <bits/stdc++.h>
using namespace std;
long long l;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	l = s1.size();
	for (int i = 0; i < l; i++) {
		if (i == 0) {
			if (s1[i] == s2[i] && s1[i + 1] == s2[i + 1]) {
				cout << 1;
			} else {
				cout << "000";
				return 0;
			}
		}
		if (i == 2) {
			if ((s1[i] >= 'A' && s1[i] <= 'C') && (s2[i] >= 'A' && s2[i] <= 'C')) {
				cout << 1;
			} else if ((s1[i] >= 'D' && s1[i] <= 'F') && (s2[i] >= 'D' && s1[i] <= 'F')) {
				cout << 1;
			} else {
				cout << "00";
				return 0;
			}
			if ((s1[i] == 'A' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'C')) {
				cout << 1;
			} else if ((s1[i] == 'B' && s2[i] == 'A') || (s1[i] == 'c' && s2[i] == 'B')) {
				cout << 1;
			} else if ((s1[i] == 'D' && s2[i] == 'F') || (s1[i] == 'F' && s2[i] == 'D')) {
				cout << 1;
			} else {
				cout << 0;
			}
		}
	}
	return 0;
}
