#include <bits/stdc++.h>
using namespace std;
int c1, c2;
int sa1, sa2;
char sb1, sb2;

bool b[] = {0, 0, 0, 1, 1};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> sa1 >> sb1 >> c2 >> sa2 >> sb2;
	bool aa = (c1 == c2);
	bool ab = (sa1 == sa2) && aa;
	bool ac = (b[sb1 - 'A'] == b[sb2 - 'A']) && ab;
	bool ad = (abs(sb1 - sb2) == 1) && ac;
	cout << aa << ab << ac << ad;
	return 0;
}
