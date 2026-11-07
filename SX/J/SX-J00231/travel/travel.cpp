#include <bits/stdc++.h>
using namespace std;
int c1, s1, c2, s2;
int sum1, sum2;
int sc1, sc2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (s1[s1.size() - 1] == 'A' || s1[s1.size() - 1] == 'B' || s1[s1.size() - 1] == 'C') {
				sum1 = 1;
				if (s1[s1.size() - 1] == 'D' || s1[s1.size() - 1] == 'E') {
					sum1 = 1;
					if (s2[s2.size() - 1] == 'A' || s2[s2.size() - 1] == 'B' || s2[s2.size() - 1] == 'C') {
						sum2 = 1;
						if (s2[s2.size() - 1] == 'D' || s2[s2.size() - 1] == 'E') {
							sum2 = 1;
							if (sum1 == sum2) {
								cout << 1;
								sc1 = int (s1[s1.size() - 1]);
								sc2 = int (s2[s2.size() - 1]);
								if (sc1 + 1 == sc2 || sc1 - 1 == sc2) {
									cout << 1;
								} else {
									cout << "00";
								} else {
									cout << "000";
								} else {
									cout << "0000";
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
