#include<bits/stdc++.h>
using namespace std;
string c, s, cl, sl;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> s >> cl >> sl;
	if (c[0] == cl[0] && c[1] == cl[1]) {
		cout << 1;
		if (s[0] == sl[0] && s[1] == sl[1]) {
			cout << 1;
			int x = s[2] - 'A', y = sl[2] - 'A';
			if ((x <= 2 && y <= 2) || (x > 2 && y > 2)) {
				cout << 1;
				if (abs(x - y) == 1 || (x > 2 && y > 2)) {
					cout << 1;
				}
				else {
					cout << 0;
				}
			}
			else {
				cout << "00";
			}
		}
		else {
			cout << "000";
		}
	}
	else {
		cout << "0000";
	}
	return 0;
}