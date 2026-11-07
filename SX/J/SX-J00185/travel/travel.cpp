#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

bool hallway(char a, char b) {
	if (((a == 'A') || (a == 'B') || (a == 'C')) && ((b == 'A') || (b == 'B') || (b == 'C')))
		return true;
	else if (((a == 'D') || (a == 'F')) && ((b == 'D') || (b == 'F')))
		return true;
	else
		return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("trevel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		if (s1[0] != s2[0] || s1[1] != s2[1]) {
			cout << "1000";
		} else {
			if (!hallway(s1[2], s2[2])) {
				cout << "1100";
			} else {
				if ((s2[2] == s1[2] + 1) || (s2[2] == s1[2] - 1) || ((s1[2] == 'D') && (s2[2] == 'F')) || ((s1[2] == 'f')
				        && (s2[2] == 'D'))) {
					cout << "1111";
				} else {
					cout << "1110";
				}
			}
		}
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
