#include <bits/stdc++.h>
using namespace std;

int main() {
	//travel.in
	//travel.out
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0000;
		return 0;
	}
	int a1, a2, p[3] = {1, 1, 0};
	for (int i = 0; i <= 2; i++) {
		if (p[i] == 1) {
			a1 = s1[i];
		}
	}
	for (int i = 0; i <= 2; i++) {
		if (p[i] == 1) {
			a2 = s2[i];
		}
	}
	if (a1 == a2) {
		cout << 1;
	} else {
		cout << 000;
		return 0;
	}
	int o[3] = {0, 0, 1,};
	char b1, b2;
	for (int i = 0; i <= 2; i++) {
		if (o[i] == 1) {
			b1 = s1[i];
		}
	}
	for (int i = 0; i <= 2; i++) {
		if (o[i] == 1) {
			b2 = s2[i];
		}
	}
	if (b1 == 'A' && b2 == 'B' || b1 == 'B' && b2 == 'A' || b1 == 'B' && b2 == 'C' || b1 == 'C' && b2 == 'B'
	        || b1 == 'D'
	        && b2 == 'F'
	        || b1 == 'F' && b2 == 'D'
	        || b1 == 'A' && b2 == 'C' || b1 == 'C' && b2 == 'A') {
		cout << 1;
	} else {
		cout << 00;
		return 0;
	}
	if (b1 == 'A' && b2 == 'B' || b1 == 'B' && b2 == 'A' || b1 == 'B' && b2 == 'C' || b1 == 'C' && b2 == 'B' || b1 == 'D'
	        && b2 == 'F' || b1 == 'F' && b2 == 'D') {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
