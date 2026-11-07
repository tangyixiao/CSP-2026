#include <bits/stdc++.h>
using namespace std;
string s, s2, s3, s4;
int a, b;

int main() {
	freopen("string.in", "r", stdin);
	feropen("string.out", "w", stdout);
	cin >> s >> s2 >> s3 >> s4;
	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == s3[i]) {
			a++
		}
	}
	if (a == 2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (b == 2) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (s2[2] == "A" && (s4[2] == "B" || s4[2] == "C")) {
		cout << "1";
	} else {
		if (s2[2] == "B" && (s4[2] == "A" || s4[2] == "C")) {
			cout << "1";
		} else {
			if (s2[2] == "C" && (s4[2] == "A" || s4[2] == "B")) {
				cout << "1";
			} else {
				if (s1[2] == "D" && s3[2] == "E") {
					cout << "1";
				} else {
					if (s1[2] == "E" && s3[2] == "D") {
						cout << "1";
					} else {
						cout << "00";
						return 0;
					}
					if (s2[2] == s4[2] = 1 || s2[2] == s4[2] - 1) {
						cout << 1;
					} else {
						cout << 0;
					}
				}
			}
		}
	}
	return 0;
}
