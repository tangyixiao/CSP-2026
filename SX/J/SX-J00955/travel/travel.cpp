#include <bits/stdc++.h>
using namespace std;
long long c1, c2;
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] and s1[1] == s2[1]) {
			cout << 1;
			if (s1[2] <= 'C' and s2[2] <= 'C' or s1[2] > 'C' and s2[2] > 'C') {
				cout << 1;
				if (s1[1] + 1 == s2[1] or s1[1] - 1 == s2[1]) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
}
