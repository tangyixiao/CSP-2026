#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	else {
		string a, b;
		for (int i = 0; i <= 1; i++) a += s1[i];
		for (int i = 0; i <= 1; i++) b += s2[i];
		cout << 1;
		if (a == b) {
			cout << 1;
		}
		else {
			cout << 0;
		}
		char c = s1[2], d = s2[2];
		if (a == b) {
			if (c == 'A' || c == 'B' || c == 'C') {
				if (d == 'A' || d == 'B' || d == 'C') {
					cout << 1;
				}
				else {
					cout << 0;
				}
			}
			else {
				if (d == 'F' || d == 'D') {
					cout << 1;
				}
				else {
					cout << 0;
				}
			}
		}
		else {
			cout << 0;
		}
		if (a == b) {
			if (c == 'A' || c == 'B' || c == 'C') {
				if (d == 'A' || d == 'B' || d == 'C') {
					if (abs(int(c) - int(d)) == 1) {
						cout << 1;
					}
					else {
						cout << 0;
					}
				}
				else {
					cout << 0;
				}
			}
			else {
				if (d == 'F' || d == 'D') {
					if (abs(int(c) - int(d)) == 1) {
						cout << 1;
					}
					else {
						cout << 0;
					}
				}
				else {
					cout << 0;
				}
			}
		}
		else {
			cout << 0;
		}
	}
} 
