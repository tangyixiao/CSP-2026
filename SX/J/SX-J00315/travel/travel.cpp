#include <bits/stdc++.h>
using namespace std;
char s1[3], s2[3];
char c1[2], c2[2];

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
	int a1 = (c1[1] - '0') * 10 + (c1[2] - '0');
	int a2 = (c2[1] - '0') * 10 + (c2[2] - '0');
	if (a1 != a2) {
		cout << "0000" << endl;
		return 0;
	}
	cout << "1";
	int n1 = (s1[1] - '0') * 10 + (s1[2] - '0');
	int n2 = (s2[1] - '0') * 10 + (s2[2] - '0');
	if (n1 != n2) {
		cout << "000" << endl;
		return 0;
	}
	cout << "1";
	if ((s1[3] > 'C' && s2[3] <= 'C') || (s1[3] <= 'C' && s2[3] > 'C')) {
		cout << "00" << endl;
		return 0;
	}
	cout << "1";
	if (s1[3] > 'C' && s2[3] > 'C') {
		cout << "1" << endl;
		return 0;
	}
	if (abs((s1[3] - 'A') - (s2[3] - 'A')) == 1) {
		cout << "1" << endl;
		return 0;
	}
	cout << "0" << endl;
	return 0;
}
