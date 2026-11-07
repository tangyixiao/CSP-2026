#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int count[4] = {};
	string c1, c2, a1, a2;
	cin >> c1 >> a1 >> c2 >> a2;
	if (c1 == c2) {
		count[0] = 1;
		if (a1[0] == a2[0] && a1[1] == a2[1]) {
			count[1] = 1;
			if (a1[2] >= 'A' && a1[2] <= 'C' && a2[2] >= 'A' && a2[2] <= 'C') {
				count[2] = 1;
				if (a1[2] - 'A' == a2[2] - 'A' + 1 || a1[2] - 'A' == a2[2] - 'A' - 1) {
					count[3] = 1;
				}
			} else if (a1[2] >= 'E' && a1[2] <= 'F' && a2[2] >= 'E' && a2[2] <= 'F') {
				count[2] = 1;
				if (a1[2] - 'A' == a2[2] - 'A' + 1 || a1[2] - 'A' == a2[2] - 'A' - 1) {
					count[3] = 1;
				}
			}
		}
	}
	for (int i = 0; i < 4; i++)
		cout << count[i];
	return 0;
}
