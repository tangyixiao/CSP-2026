#include<bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
bool check(string s, string t) {
	int num1 = s[0] - 'A';
	int num2 = t[0] - 'A';
	if ((num1 < 3 && num2 < 3) || (num1 >= 3 && num2 >= 3)) {
		return true;
	}
	return false;
}
bool check2(string s, string t) {
	int num1 = s[0] - 'A';
	int num2 = t[0] - 'A';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j && abs(i - j) == 1) {
				if (num1 == i && num2 == j) return true;
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (i != j && abs(i - j) == 1) {
				int x = (i == 0 ? 3 : 5);
				int y = (j == 0 ? 3 : 5);
				if (num1 == x && num2 == y) return true;
			}
		}
	}
	return false;
}
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << 0;
	} else {
		cout << 1;
	}
	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2)) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && check(s1.substr(2), s2.substr(2))) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && check(s1.substr(2), s2.substr(2)) && check2(s1.substr(2), s2.substr(2))) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
//³ô³¤qwq 
