#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string A;
	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			bool s1_3;
			if (s1[2] >= 'A' && s1[2] <= 'C') {
				s1_3 = true;
			} else {
				s1_3 = false;
			}
			bool s2_3;
			if (s2[2] >= 'A' && s2[2] <= 'C') {
				s2_3 = true;
			} else {
				s2_3 = false;
			}

			if (s1_3 == s2_3) {
				if ((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A')) {
					A = "1110";
				} else {
					A = "1111";
				}
			} else {
				A = "1100";
			}
		} else {
			A = "1000";
		}
	} else {
		A = "0000";
	}
	cout << A;

	fclose(stdin);
	fclose(stdout);
	return 0;
}