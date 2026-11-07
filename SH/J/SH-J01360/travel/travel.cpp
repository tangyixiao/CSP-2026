#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int main()
{
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 == c2) cout << 1;
	else cout << 0;
	
	int x = 10*(s1[0]-'0')+(s1[1]-'0');
	int y = 10*(s2[0]-'0')+(s2[1]-'0');
	if (c1 == c2 && x == y) cout << 1;
	else cout << 0;
	
	char a = s1[2];
	char b = s2[2];
	bool flag = (a=='A'&&b=='B' || a=='A'&&b=='C' || a=='B'&&b=='A'|| a=='B'&&b=='C' || a=='C'&&b=='A' || a=='C'&&b=='B' || a=='D'&&b=='F' || a=='F'&&b=='D');
	if (c1 == c2 && x == y && flag) cout << 1;
	else cout << 0;
	
	bool flag2 = (a=='A'&&b=='B' || a=='B'&&b=='A'|| a=='B'&&b=='C'||a=='C'&&b=='B' || a=='D'&&b=='F' || a=='F'&&b=='D');
	if (c1 == c2 && x == y && flag2) cout << 1;
	else cout << 0;
	
	return 0;
} 
