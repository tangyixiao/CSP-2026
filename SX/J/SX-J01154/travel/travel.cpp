#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	int num = 0;
	int a1, a2;
	int n = 0;
	cin >> c1 >> s1 >> c2 >> s2;
	if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
		n = 1;
	} else if (s1[2] == 'D' && s2[2] == 'F') {
		n = 1;
	} else if (s1[2] == 'F' && s2[2] == 'D') {
		n = 1;
	}
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
		a1 = 1;
	} else if (s1[2] == 'D' || s1[2] == 'F') {
		a1 = 0;
	}
	if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') {
		a2 = 1;
	} else if (s2[2] == 'D' || s2[2] == 'F') {
		a2 = 0;
	}
	if (c1 == c2) {
		cout << "1";
		num++;
	} else
		cout << "0";
	if (num == 1 && s1[0] == s2[0] && s1[1] == s2[1]) {
		cout << "1";
		num++;
	} else
		cout << "0";
	if (num == 2 && a1 == a2) {
		cout << "1";
		num++;
	} else
		cout << "0";
	if (num == 3 && n == 1) {
		cout << "1";
	} else
		cout << "0";
	return 0;
}
