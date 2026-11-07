#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("reavel.out", "w", stdout);
	string c1, s1, c2, s2;
	string s1num[2], s2num[2], s1word, s2word;

	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i < 2; i++) {
		s1num[i] = s1[i];
		s2num[i] = s2[i];
	}
	s1word = s1[2];
	s2word = s2[2];
	if (c1 == c2) {
		cout << "1";
		if (s1num[1] == s2num[1] && s1num[0] == s2num[0]) {
			cout << "1";
			if (s1word >= "A" && s1word <= "C" && s2word >= "A" && s2word <= "C") {
				cout << "1";
				if ((s1word == "A" && s2word == "C") || (s1word == "C" && s2word == "A")) {
					cout << "0";
				} else {
					cout << "1";
				}
			} else if (s1word >= "D" && s1word <= "F" && s2word >= "D" && s2word <= "F") {
				cout << "11";
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}

	return 0;
}
