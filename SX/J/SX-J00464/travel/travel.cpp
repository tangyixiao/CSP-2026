#include <bits/stdc++.h>
using namespace std;
int c1, c2;
int i1, i2;
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else
		cout << 1;
	if (s1[0] == s2[0] and s1[1] == s2[1])
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	bool f1, f2;
	if (s1[2] <= 'C')
		f1 = 0;
	else
		f1 = 1;
	if (s2[2] <= 'C')
		f2 = 0;
	else
		f2 = 1;
	if (f1 == f2)
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	int c = abs(s1[2] - s2[2]);
	if (c == 1) {
		cout << 1;
	} else if (f1 == 1 and f2 == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}
