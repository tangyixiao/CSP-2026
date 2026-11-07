#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;

string c1, s1, c2, s2;
string car1, car2;
map<char, int> mp;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	cout << (c1 == c2 ? 1 : 0);
//	cout << s1[0];
	car1 += s1[0];
	car1 += s1[1];
	car2 += s2[0];
	car2 += s2[1];
	cout << (c1 == c2 && car1 == car2 ? 1 : 0);
	bool side1, side2;
	side1 = (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C');
	side2 = (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C');
	cout << (c1 == c2 && car1 == car2 && side1 == side2 ? 1 : 0);
	mp['A'] = 1;
	mp['B'] = 2;
	mp['C'] = 3;
	mp['D'] = 4;
	mp['F'] = 5;
	cout << (c1 == c2 && car1 == car2 && side1 == side2 && abs(mp[s1[2]] - mp[s2[2]]) == 1 ? 1 : 0);
	return 0;
}
