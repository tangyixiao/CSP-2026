#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int x = (s1[0] - '0') * 10 + (s1[1] - '0'), y = (s2[0] - '0') * 10 + (s2[1] - '0');
	char xx = s1[2], yy = s2[2];
	if (stoi(c1) == stoi(c2)) {
		cout << "1";
		if (x == y) {
			cout << "1";
			if ((xx >= 'A' && xx <= 'C' && yy >= 'A' && yy <= 'C') || (xx >= 'D' && xx <= 'E' && yy >= 'D' && yy <= 'E')) {
				cout << "1";
				if (abs(int(xx - yy)) <= 1) {
					cout << "1";
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}