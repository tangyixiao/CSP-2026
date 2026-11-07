#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

bool f(char a, char b) {
	if ((a == 'C' && b == 'D') || (a == 'D' && b == 'C'))
		return 0;
	if (a + 1 != b && b + 1 != a)
		return 0;
	return 1;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << "1";
	else {
		cout << "0000";
		return 0;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1])
		cout << "1";
	else {
		cout << "000";
		return 0;
	}
	if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C'))
		cout << "1";
	else {
		cout << "00";
		return 0;
	}
	if (f(s1[2], s2[2]))
		cout << 1;
	else
		cout << "0";
	return 0;
}
