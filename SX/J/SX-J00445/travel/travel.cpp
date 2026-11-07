#include <bits/stdc++.h>
using namespace std;
int cut1, cut2;
string s1, s2, c1, c2 ;
int ss1, ss2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (s1[s1.size() - 1] == 'A' || s1[s1.size() - 1] == 'B' || s1[s1.size() - 1] == 'C') {
				cut1 = 1;
			}
			if (s1[s1.size() - 1] == 'D' || s1[s1.size() - 1] == 'E') {
				cut1 = 2;
			}
			if (s2[s2.size() - 1] == 'A' || s2[s2.size() - 1] == 'B' || s2[s2.size() - 1] == 'C') {
				cut2 = 1;
			}
			if (s2[s2.size() - 1] == 'D' || s2[s2.size() - 1] == 'E') {
				cut2 = 2;
			}
			if (cut1 == cut2) {
				cout << 1;
				ss1 = int(s1[s1.size() - 1]);
				ss2 = int(s2[s2.size() - 1]);
				if (ss1 + 1 == ss2 || ss1 - 1 == ss2)
					cout << 1;
				else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
