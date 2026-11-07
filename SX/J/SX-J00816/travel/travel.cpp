#include <iostream>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1;
	string s1;
	string c2;
	string s2;
	cin >> c1 >> s1 >> c2 >> s2;
	char a = s1[2];
	char b = s2[2];
	if (c1 == c2)
		cout << 1;
	else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}

	if (s1[0] == s2[0] && s1[1] == s2[1])
		cout << 1;
	else {
		cout << 0 << 0 << 0;
		return 0;
	}

	if (a <= 67 && b <= 67)
		cout << 1;
	else if (a >= 68 && b >= 68)
		cout << 1;
	else {
		cout << 0 << 0;
		return 0;
	}

	if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2])
		cout << 1;
	else
		cout << 0;
	return 0;
}
