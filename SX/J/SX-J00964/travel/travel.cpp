#include <bits/stdc++.h>
using namespace std;
#define ll long long
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	ll f = 0;
	for (int i = 1; i <= 4; i++) {
		if (!f) {
			if (i == 1) {
				if (c1 == c2)
					cout << 1;
				else
					f = 1;
			} else if (i == 2) {
				if (s2.substr(0, 2) == s1.substr(0, 2))
					cout << 1;
				else
					f = 1;
			} else if (i == 3) {
				if ((s1.substr(2, 1) <= "C" && s2.substr(2, 1) <= "C") || (s1.substr(2, 1) >= "D" && s1.substr(2, 1) <= "F"
				        && s2.substr(2, 1) >= "D" && s2.substr(2, 1) <= "F"))
					cout << 1;
				else
					f = 1;
			} else {
				if (abs((s1[2] - 65) - (s2[2] - 65)) == 1)
					cout << 1;
				else
					f = 1;
			}
		}
		if (f)
			cout << 0;
	}
	return 0;
}
