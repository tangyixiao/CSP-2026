#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	char r, x;
	r = s1[2];
	x = s2[2];
	if(c1 == c2) {
		cout << 1;
		if(s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if((r <= 'C' && x <= 'C') || (r >= 'D' && x >= 'D')) {
				cout << 1;
				if((abs(r - x) == 1) || (r == 'D' && x == 'F') || (r == 'F' && x == 'D')) {
					cout << 1;
				}
				else cout << 0;
			}
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	return 0;
}
