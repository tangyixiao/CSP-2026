#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}

	if (s1[1 - 1] = s2[1 - 1] && s1[2 - 1] == s2[2 - 1]) {
		cout << "1";
		if (s1[3 - 1] == 'A' && s2[3 - 1] == 'B') {
			cout << "11";
		} else if (s1[3 - 1] == 'A' && s2[3 - 1] == 'C') {
			cout << "1";
		} else if (s1[3 - 1] == 'B' && s2[3 - 1] == 'A') {
			cout << "11";
		} else if (s1[3 - 1] == 'B' && s2[3 - 1] == 'C') {
			cout << "11";
		} else if (s1[3 - 1] == 'C' && s2[3 - 1] == 'B') {
			cout << "11";
		} else if (s1[3 - 1] == 'C' && s2[3 - 1] == 'A') {
			cout << "1";
		} else if (s1[3 - 1] == 'D' && s2[3 - 1] == 'E') {
			cout << "11";
		} else if (s1[3 - 1] == 'E' && s2[3 - 1] == 'D') {
			cout << "11";
		} else {
			cout << "0";
		}
	} else
		cout << "000";
	if (s1[3 - 1] == 'A' && s2[3 - 1] == 'C') {
		cout << "0";
	} else if (s1[3 - 1] == 'C' && s2[3 - 1] == 'A') {
		cout << "0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}