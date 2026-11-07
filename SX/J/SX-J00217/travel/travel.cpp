#include <bits/stdc++.h>
using namespace std;
string s, s2, xs, xs2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s >> s2 >> xs >> xs2;
	if (s == xs) {
		if (s2[0] == xs2[0] && s2[1] == xs2[1]) {
			if (((s2[2] >= 'A' && s2[2] <= 'C') && (xs2[2] >= 'A' && xs2[2] <= 'C')) || ((s2[2] >= 'D' && s2[2] <= 'F')
			        && (xs2[2] >= 'D' && xs2[2] <= 'F'))) {
				if (((s2[2] == xs2[2] + 1) || (s2[2] == xs2[2] - 1)) && (s2[2] != 'C' && xs2[2] != 'D')) {
					cout << "1111";
				} else {
					cout << "1110";
				}
			} else {
				cout << "1100";
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}

