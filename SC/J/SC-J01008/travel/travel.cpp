#include <bits/stdc++.h>

using namespace std;

string c1, s1, c2, s2;
bool flag[4];
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		flag[1] = 1;
		string a, b;
		a[0] = s1[0];
		a[1] = s1[1];
		b[0] = s2[0];
		b[1] = s2[1];
		if (a == b) {
			flag[2] = 1;
			if ((s1[2] == 'A' && (s2[2] == 'B' || s2[2] == 'C')) || (s1[2] == 'B' && (s2[2] == 'A' || s2[2] == 'C')) || (s1[2] == 'C' && (s2[2] == 'B' || s2[2] == 'A'))) {
				flag[3] = 1;
				if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && (s2[2] == 'C' || s2[2] == 'A')) || (s1[2] == 'C' && s2[2] == 'B')) flag[4] = 1;
			} else if ((s1[2] == 'F' && s2[2] == 'D' ) || (s1[2] == 'D' && s2[2] == 'F')) {
				flag[3] = 1;
				if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) flag[4] = 1;
			}
		}
	}
	cout << flag[1] << flag[2] << flag[3] << flag[4];
	return 0;
}