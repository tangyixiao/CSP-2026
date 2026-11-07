#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	// 1
	if (c1 == c2) cout << "1";
	else return cout << "0000", 0;
	// 2
	int r1 = stoi(s1.substr(0, 2));
	int r2 = stoi(s2.substr(0, 2));
	if (r1 == r2) cout << "1";
	else return cout << "000", 0;
	// 3
	char a = s1[2], b = s2[2];
	if (a == 'A' || a == 'B' || a == 'C') {
		if (b == 'A' || b == 'B' || b == 'C') cout << "1";
		else return cout << "00", 0;
	}
	else {
		if (b == 'F' || b == 'D') cout << "1";
		else return cout << "00", 0;
	}
	// 4
	if (a == 'A' && b == 'B' || a == 'B' && b == 'C') cout << "1";
	else if (b == 'A' && a == 'B' || b == 'B' && a == 'C') cout << "1";
	else if (a == 'D' && b == 'F') cout << "1";
	else if (b == 'D' && a == 'F') cout << "1";
	else cout << "0";
	return 0;
}
