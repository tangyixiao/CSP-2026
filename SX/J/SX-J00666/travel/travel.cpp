#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	int a = (s1[0] - 48) * 10 + (s1[1] - 48), b = (s2[0] - 48) * 10 + (s2[1] - 48);
	if (a != b) {
		cout << "1000";
		return 0;
	}
	int c = s1[2] - 64, d = s2[2] - 64;
	if (c >= 4 && d >= 4) {
		cout << "1111";
	} else if (c <= 3 && d <= 3) {
		if (abs(c - d) == 1) {
			cout << "1111";
		} else {
			cout << "1110";
		}
	} else {
		cout << "1100";
	}
	return 0;
}