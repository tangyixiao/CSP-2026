#include <bits/stdc++.h>
using namespace std;

set <string> mp = {"FD", "DF", "CB", "BC", "CA", "AC", "BA", "AB"};
set <string> mp2 = {"DF", "DF", "CB", "BC", "BA", "AB"};

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	cout << (c1 == c2);
	if (c1 != c2) {
		cout << "000";
		return 0;
	}
	cout << (s1[0] == s2[0] && s1[1] == s2[1]);
	
	string temp;
	
	if (s1[2] == 'A') temp += "A";
	if (s1[2] == 'B') temp += "B";
	if (s1[2] == 'C') temp += "C";
	if (s1[2] == 'D') temp += "D";
	if (s1[2] == 'E') temp += "E";
	if (s1[2] == 'F') temp += "F";
	
	if (s2[2] == 'A') temp += "A";
	if (s2[2] == 'B') temp += "B";
	if (s2[2] == 'C') temp += "C";
	if (s2[2] == 'D') temp += "D";
	if (s2[2] == 'E') temp += "E";
	if (s2[2] == 'F') temp += "F";
	
	cout << (s1[0] == s2[0] && s1[1] == s2[1] && (mp.find(temp) != mp.end()));
	cout << (s1[0] == s2[0] && s1[1] == s2[1] && (mp2.find(temp) != mp2.end()));
	return 0;
} 
