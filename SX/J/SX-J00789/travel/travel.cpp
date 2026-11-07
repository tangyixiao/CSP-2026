#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b) {
	int flaga = 0, flagb = 0;
	string d1 = "ABC";
	for (int i = 0; i < d1.size(); i++) {
		if (a == d1[i])
			flaga = 1;
	}
	for (int i = 0; i < d1.size(); i++) {
		if (b == d1[i])
			flagb = 1;
	}
	if (flaga == flagb)
		return 1;
	return 0;
}

bool check2(char a, char b) {
	string d1 = "ABC", d2 = "DF";
	bool flag = 0;
	for (int i = 0; i < d1.size(); i++) {
		if ((d1[i] == a && d1[i + 1] == b) || (d1[i] == a && d1[i - 1] == b)) {
			flag = 1;
		}
	}
	if (flag)
		return 1;
	else {
		for (int i = 0; i < d2.size(); i++) {
			if ((d2[i] == a && d2[i + 1] == b) || (d2[i] == a && d2[i - 1] == b) ) {
				flag = 1;
			}
		}
	}
	if (flag)
		return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	string s = "";
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		s += "1";
	} else {
		s = "0000";
		cout << s;
		return 0;
	}
	string pai1 = "", pai2 = "";
	char zw1, zw2;
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] >= '0' && s2[i] <= '9') {
			pai2 += s2[i];
		}
	}
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] >= '0' && s1[i] <= '9') {
			pai1 += s1[i];
		}
	}
	for (int i = 0; i < s2.size(); i++) {
		if (s2[i] >= 'A' && s2[i] <= 'F') {
			zw2 = s2[i];
		}
	}
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] >= 'A' && s1[i] <= 'F') {
			zw1 = s1[i];
		}
	}
	if (pai1 == pai2) {
		s += "1";
		if (check(zw1, zw2)) {
			s += "1";
			if (check2(zw1, zw2)) {
				s += "1";
			} else
				s += "0";
		} else {
			s += "00";
		}
	} else {
		s += "000";
	}
	cout << s;
	return 0;
}
