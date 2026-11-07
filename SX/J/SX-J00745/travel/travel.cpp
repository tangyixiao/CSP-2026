#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2, n, m, n1, m1;


int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] >= 'A' && s1[i] <= 'F') {
			n = s1[i];
		} else
			n1 += s1[i];
		if (s2[i] >= 'A' && s2[i] <= 'F') {
			m = s2[i];
		} else
			m1 += s2[i];
	}
	if (c1 == c2) {
		cout << 1;
		if (n1 == m1) {
			cout << 1;
			if ((n == "A" && m == "B") || (n == "B" && m == "A") || (n == "C" && m == "B") || (n == "B" && m == "C") || (n == "D"
			        && m == "F") || (n == "F" && m == "D")) {
				cout << 1 << 1;
			} else if ((n == "D" && m == "C") || (n == "C" && m == "D") || (n == "D" && m == "A") || (n == "A" && m == "D")
			           || (n == "D" && m == "B") || (n == "B" && m == "D") || (n == "F" && m == "C") || (n == "C" && m == "F") || (n == "F"
			                   && m == "A") || (n == "A" && m == "F") || (n == "F" && m == "B") || (n == "B" && m == "F")) {
				cout << 0 << 0;
			} else {
				cout << 1 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else
		cout << 0 << 0 << 0 << 0;
	return 0;
}
