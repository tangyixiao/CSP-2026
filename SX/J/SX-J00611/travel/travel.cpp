#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> c2 >> s1 >> s2;
	if (c1 == s1) {
		if (c2[0] == s2[0] && c2[1] == s2[1]) {
			cout << "1111";
		}
	} else {
		cout << "0000";
	}
	return 0;
}

