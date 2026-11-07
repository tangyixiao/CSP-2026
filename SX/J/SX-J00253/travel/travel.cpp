#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool k1 = 1, k2 = 1, k3 = 1, k4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i <= 1; i++) {
		if (c1[i] != c2[i]) {
			cout << "0000";
			return 0;
		}
	}
	for (int i = 0; i <= 1; i++) {
		if (s1[i] != s2[i])
			k2 = 0;
	}
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
		if (s2[2] == 'D' || s2[2] == 'F') {
			k3 = 0;
		}
	}
	if (s1[2] == 'D' || s1[2] == 'F') {
		if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') {
			k3 == 0;
		}
	}
	if (k2 == 0)
		k3 = 0;
	if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
		if (k3 == 1) {
			k4 = 1;
		}
	}
	cout << k1 << k2 << k3 << k4;
	return 0;
}
