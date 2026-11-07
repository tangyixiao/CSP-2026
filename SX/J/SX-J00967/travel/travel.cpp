#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
long long f = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	f = 0;
	for (int i = 1; i <= 2; i++) {
		if (s1[i] == s2[i] ) {
			f = 1;
		} else {
			f = 0;
		}
	}
	if (f == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((s1[0] <= 'C' && s2[0] <= 'C') || (s1[0] > 'C' && s1[0] <= 'F' && s2[0] > 'C' && s2[0] <= 'F')) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((s1[0] + 1 == s2[0]) || (s2[0] + 1 == s1[0]) || (s1[0] == 'F' && s2[0] == 'D') || (s1[0] == 'D'
	        && s2[0] == 'F')) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
