#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string p1(s1, 0, 2), p2(s2, 0, 2);
	char z1 = s1[2], z2 = s2[2];
	if (c1 == c2) {
		cout << 1;
		if (p1 == p2) {
			cout << 1;
			if (z1 <= 'C' && z2 <= 'C' || z1 >= 'D' && z2 >= 'D') {
				cout << 1;
				if (abs(z1 - z2) == 1)
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
}
