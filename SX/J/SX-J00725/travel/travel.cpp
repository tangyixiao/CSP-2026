#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	//≥µœ·
	if (c1 == c2)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}

	string id1, id2;
	id1 += s1[0];
	id1 += s1[1];
	id2 += s2[0];
	id2 += s2[1];
	//≈≈
	if (id1 == id2)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}

	char id3 = s1[2], id4 = s2[2];
	//Õ¨≤‡
	if ((id3 == 'A' || id3 == 'B' || id3 == 'C') && (id4 == 'A' || id4 == 'B' || id4 == 'C')) {
		cout << 1;
	} else if ((id3 == 'D' || id3 == 'F') && (id4 == 'D' || id4 == 'F')) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	//◊˘Œª
	if ((int(id3 - id4) == 1) || (int(id4 - id3) == 1))
		cout << 1;
	else {
		cout << '0';
	}
	return 0;
}