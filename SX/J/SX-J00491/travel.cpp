#include <bits/stdc++.h>
using namespace std;

int main() {
	char c[25], s[25], k[25], z[25];
	for (int i = 1; i <= 2; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> k[i];
	}
	for (int i = 1; i <= 2; i++) {
		cin >> s[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> z[i];
	}
	if ((c[1] == s[1]) && (c[2] == s[2])) {
		if ((k[1] == z[1]) && (k[2] == z[2])) {
			if ((k[3] == 'A' && z[3] == 'B') || (k[3] == 'B' && z[3] == 'A') || (k[3] == 'C' && z[3] == 'B') || (k[3] == 'B'
			        && z[3] == 'C') || (k[3] == 'A' && z[3] == 'C') || (k[3] == 'C' && z[3] == 'A') || (k[3] == 'D' && z[3] == 'F')
			        || (k[3] == 'F' && z[3] == 'D')) {
				if ((k[3] == 'A' && z[3] == 'B') || (k[3] == 'B' && z[3] == 'A') || (k[3] == 'C' && z[3] == 'B') || (k[3] == 'B'
				        && z[3] == 'C') || (k[3] == 'D' && z[3] == 'F') || (k[3] == 'F' && z[3] == 'D')) {
					cout << 1111;
				} else {
					cout << 1110;
				}
			} else {
				cout << 1100;
			}
		} else {
			cout << 1000;
		}
	} else {
		cout << 0000;
	}
}