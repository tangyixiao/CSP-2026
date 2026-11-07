#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << 1 << endl;
	else {
		cout << 0 << endl << 0 << endl << 0 << endl << 0 << endl;
		return 0;
	}

	if (s1[0] == s2[0] && s1[1] == s2[1])
		cout << 1 << endl;
	else {
		cout << 0 << endl << 0 << endl << 0 << endl;
		return 0;
	}
	if ((char (s1[2]) == 'D' && char (s2[2])  == 'E' ) || (char(s1[2]) <= 67 && char(s2[2]) <= 67))
		cout << 1 << endl;
	else {
		cout << 0 << endl << 0 << endl;
		return 0;
	}
	if (char(s1[2] + 1) == char(s2[2]))
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}
