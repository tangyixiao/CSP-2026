#include <bits/stdc++.h>
using namespace std;

string c1, c2;
string s1, s2;
long long cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;

int main() {
	freopen("travel.in", "r", stdin)
	freopen("travel.out", "w", stdout)
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		for (int i = 0; i < 2; ++i) {
			if (s1[i] == s2[i]) {
				cnt++;
			}
		}
		if (cnt == 2) {
			cout << "1";
			if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
				cnt1++;
			}
			if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') {
				cnt1++;
			}
			if (s1[2] == 'D' || s1[2] == 'F'  ) {
				cnt2++;
			}
			if (s2[2] == 'D' || s2[2] == 'F') {
				cnt2++;
			}
			if (s1[2] == 'A' && s2[2] == 'B') {
				cnt3++;
			}
			if (s2[2] == 'A' && s1[2] == 'B') {
				cnt3++;
			}
			if (s1[2] == 'B' && s2[2] == 'C') {
				cnt3++;
			}
			if (s2[2] == 'B' && s1[2] == 'C') {
				cnt3++;
			}
			if (s1[2] == 'D' && s2[2] == 'F') {
				cnt3++;
			}
			if (s2[2] == 'D' && s1[2] == 'F') {
				cnt3++;
			}
		} else {
			cout << "0";
		}
		if (cnt1 == 2) {
			cout << "1";
		} else if (cnt2 == 2) {
			cout << "1";
		} else {
			cout << "0";
		}
		if (cnt3 != 0) {
			cout << "1";
		} else {
			cout << "0";
		}
	} else {
		cout << "0000";
	}
	return 0;
}