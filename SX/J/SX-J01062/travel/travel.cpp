#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	char c11 = s2[0], c12 = s2[1], c2 = s2[2], c31 = s4[0], c32 = s4[1], c4 = s4[2];
	int c1 = (c11 - '0') + (c12 - '0'), c3 = (c31 - '0') + (c32 - '0');
	if (c2 == 'F')
		c2 = 'E';
	if (c4 == 'F')
		c4 = 'E';
	int k = 1;
	if (s1 != s3) {
		for (int i = k; i <= 4; i++)
			cout << "0";
		return 0;
	} else {
		cout << "1";
		k++;
		if (c1 != c3) {
			for (int i = k; i <= 4; i++)
				cout << "0";
			return 0;
		} else {
			cout << "1";
			k++;
			if (!((c2 <= 'C' && c4 <= 'C') || (c2 >= 'D' && c4 >= 'D'))) {
				for (int i = k; i <= 4; i++)
					cout << "0";
				return 0;
			} else {
				cout << "1";
				k++;
				int m1 = c2 - 'A' + 1, m2 = c4 - 'A' + 1;
				if (!(abs(m1 - m2) == 1 && (m1 != 3 && m2 != 4))) {
					for (int i = k; i <= 4; i++)
						cout << "0";
					return 0;
				} else {
					cout << 1;
					k++;
					return 0;
				}
			}
		}
	}
	return 0;
}