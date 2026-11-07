#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
char a1, a2; //a×ù
int n1, n2, x1, x2; //n³µÏá xÐÐ

bool buxiangling(char x, char y) {
	if (x == 'D' || x == 'F' && y == 'D' || y == 'F')
		return 0;
	if (abs(int(x - y)) == 1)
		return 0;
	return 1;

}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	n1 = c1[0] * 10 + c1[1];
	n2 = c2[0] * 10 + c2[1];
	x1 = s1[0] * 10 + s1[1];
	x2 = s2[0] * 10 + s2[1];
	a1 = s1[2];
	a2 = s2[2];

	if (n1 != n2) {
		cout << "0000";
		return 0;
	} else if (x1 != x2) {
		cout << "1000";
		return 0;
	} else if (!(a1 == 'A' || a1 == 'B' || a1 == 'C' && a2 == 'A' || a2 == 'B' || a2 == 'C') || (a1 == 'D' || a1 == 'F'
	           && a2 == 'D' || a2 == 'F')) {
		cout << "1100";
		return 0;
	} else if (buxiangling(a1, a2)) {
		cout << "1110";
		return 0;
	} else {
		cout << "1111";
	}
	return 0;

}