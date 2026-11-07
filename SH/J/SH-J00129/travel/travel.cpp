#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	
	bool b1 = (c1 == c2);
	bool b2 = (b1 && (s1[0]==s2[0]) && (s1[1]==s2[1]));
	bool b3 = b2;
	
	if (s1[2] == 'A') b3 = (b3 && (s2[2]=='B' || s2[2]=='C'));
	else if (s1[2] == 'C') b3 = (b3 && (s2[2]=='B' || s2[2]=='A'));
	else if (s1[2] == 'B') b3 = (b3 && (s2[2]=='A' || s2[2]=='C'));
	else if (s1[2] == 'D') b3 = (b3 && (s2[2]=='F'));
	else if (s1[2] == 'F') b3 = (b3 && (s2[2]=='D'));
	
	bool b4 = b3;
	
	if (s1[2] == 'A') b4 = (b4 && (s2[2]=='B'));
	else if (s1[2] == 'B') b4 = (b4 && (s2[2]=='A' || s2[2]=='C'));
	else if (s1[2] == 'C') b4 = (b4 && (s2[2]=='B'));
	else if (s1[2] == 'D') b4 = (b4 && (s2[2]=='F'));
	else if (s1[2] == 'F') b4 = (b4 && (s2[2]=='D'));
	
	cout << b1 << b2 << b3 << b4;
	
	return 0;
}
