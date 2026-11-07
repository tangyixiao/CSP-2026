#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	int c1, c2;
	char s1[10], s2[10];
	cin >> c1 >> (s1 + 1) >> c2 >> (s2 + 1);

	if (c1 == c2) {
		cout << 1;
		if (s1[1] == s2[1] && s1[2] == s2[2]) {
			cout << 1;
			if ((s1[3] <= 'C' && s2[3] <= 'C') || (s1[3] >= 'D' && s2[3] >= 'D')) {
				cout << 1;
				if (abs(s1[3] - s2[3]) == 1) {
					cout << 1;
				} else
					cout << 0;
			} else
				cout << 0 << 0;
		} else
			cout << 0 << 0 << 0;
	} else
		cout << 0 << 0 << 0 << 0;

	return 0;
}
