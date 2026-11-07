#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1;
	string s1;
	string c2;
	string s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	for (int i = 0; i < c1.size(); i++) {
		if (c1[i] != c2[i]) {
			a = 0;
		}
	}
	for (int i = 0; i < s1.size() - 1; i++) {
		if (s1[i] != s2[i]) {
			b = 0;
		}
	}
	int len = s1.size() - 1;
	if (s1[len] == 'C' && s2[len] == 'D' || s1[len] == 'D' && s2[len] == 'C') {
		c = 0;
	}
	if (abs(s1[len] - s2[len]) == 1) {
		d = 1;
	}else {
		d = 0;
	}
	if (a == 1) {
		cout << "1";
		if (b == 1) {
			cout << "1";
			if (c == 1) {
				cout << "1";
				if (d == 1) {
					cout << "1";
				}else {
					cout << "0";
				}
			}else {
				cout << "00";
			}
		}else {
			cout << "000";
		}
	}else {
		cout << "0000";
	}
	return 0;
}
