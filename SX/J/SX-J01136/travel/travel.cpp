#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	for (int i = 0; i < s1.size() - 1; i++) {
		for (int j = 0; j <= s2.size() - 1; j++) {
			if (s1[i] == s2[j]) {
				cout << "1";
			} else {
				cout << "0";
			}
		}
	}

	return 0;
}
