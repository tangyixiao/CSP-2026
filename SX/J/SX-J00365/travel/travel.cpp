#include <bits/stdc++.h>
using namespace std;
char c1[10];
char s1[10];
char c2[10];
char s2[10];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (int i = 1; i <= 2; i++) {
		cin >> c1[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> s1[i];
	}
	for (int i = 1; i <= 2; i++) {
		cin >> c2[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> s2[i];
	}
	if (c1[1] == c2[1] && c1[2] == c2[2]) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if (s1[1] == s2[1] && s1[2] == s2[2]) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if ((s1[3] < 'D' && s2[3] < 'D') || (s1[3] > 'C' && s2[3] > 'C')) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if (s1[3] - 1 == s2[3] || s1[3] + 1 == s2[3]) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}