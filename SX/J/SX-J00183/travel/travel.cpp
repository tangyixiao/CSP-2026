#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			int a = s1[2] - 'A' + 1, b = s2[2] - 'A' + 1;
			if (a == 1 && b == 2 || a == 1 && b == 3 || a == 2 && b == 1 || a == 2 && b == 3 || a == 3 && b == 2 || a == 3
			        && b == 1 || a == 4 && b == 5 || a == 5 && b == 4) {
				cout << 1;
				bool f = 0;
				if ((a == 3 && b == 4) || a == 4 && b == 3)
					f = 1;
				if (max(a, b) - min(a, b) == 1 && f == 0) {
					cout << 1;
				} else
					cout << 0;
			} else
				cout << "00";
		} else
			cout << "000";

	}
	if (c1 != c2)
		cout << "0000";
	return 0;
}
