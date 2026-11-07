#include <bits/stdc++.h>
using namespace std;
string s1, s2, c1, c2;

bool pd[6] = {0, 0, 0, 0, 0, 0};

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int k1 = 0, k2 = 0, zw1 = 0, zw2 = 0;
	if (c1 == c2) {
		pd[1] = 1;
		k1 = s1.size();
		k2 = s2.size();
		bool sum = 1;
		if (k1 == k2) {
			for (int i = 0; i < k1; ++i) {
				if (s1[i] >= '0' && s1[i] <= '9') {
					if (s1[i] != s2[i]) {
						sum = 0;
					}
				}
			}
			if (sum == 1) {
				pd[2] = 1;
				if ((s1[k1 - 1] == 'F' || s1[k1 - 1] == 'D') && (s2[k1 - 1] == 'F' || s2[k1 - 1] == 'D')) {
					pd[3] = 1;
				} else if ((s1[k1 - 1] <= 'C' && s1[k1 - 1] >= 'A') && (s2[k1 - 1] >= 'A' && s2[k1 - 1] <= 'C')) {
					pd[3] = 1;
				}
			}
			if ((s1[k1 - 1] - s2[k1 - 1] == 1 || s1[k1 - 1] - s2[k1 - 1] == -1) && pd[3] == 1) {
				pd[4] = 1;
			}
			zw1 = (s1[0] - '0') * 10 + (s1[1] - '0');
			zw2 = (s2[0] - '0') * 10 + (s2[1] - '0');
			if ((zw1 - zw2 == -1 || zw1 - zw2 == 1) && s1[k1 - 1] == s2[k2 - 1]) {
				pd[4] = 1;
			}
		}
	}
	for (int i = 1; i <= 4; ++i) {
		cout << pd[i];
	}
	return 0;
}