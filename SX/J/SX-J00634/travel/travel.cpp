#include <bits/stdc++.h>
using namespace std;
string s;
bool f[4];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (int i = 1; i <= 10; i++) {
		cin >> s[i];
	}
	if (s[1] == s[6] && s[2] == s[7]) {
		f[1] = 1;
		if (s[3] == s[8] && s[4] == s[9]) {
			f[2] = 1;
			if (s[5] <= 'C' && s[10] <= 'C' || s[5] > 'C' && s[10] > 'C') {
				f[3] = 1;
				if (s[5] == 'C' && s[10] == 'D' || s[10] == 'C' && s[5] == 'D') {
					f[4] = 0;
				} else if (s[5] - s[10] == 1 || s[5] - s[10] == -1) {
					f[4] = 1;
				} else {
					f[4] = 0;
				}
			} else {
				f[3] = 0;
			}
		} else {
			f[2] = 0;
		}
	} else {
		f[1] = 0;
	}
	for (int i = 1; i <= 4; i++) {
		cout << f[i];
	}
	return 0;
}