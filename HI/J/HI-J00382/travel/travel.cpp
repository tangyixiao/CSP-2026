#include <bits/stdc++.h>
using namespace std;

bool lc(string c)
{
	if(c.size() != 2)	return 0;
	
	if(c[0] >= '2')	return 0;
	
	if(c[0] == '0' && c[1] >= '2' && c[1] <= '9')	return 1;
	if(c[0] == '1' && ((c[1] >= '0' && c[1] <= '5') || c[1] == '7'))	return 1;
	
	return 0;
}

bool ch(char c)
{
	if(c == 'A')	return 1;
	if(c == 'B')	return 1;
	if(c == 'C')	return 1;
	if(c == 'D')	return 1;
	if(c == 'F')	return 1;
}


bool ls(string s)
{
	if(s.size() != 3)	return 0;
	if(s[0] >= '2')	return 0;
	if(s[0] == '0' && s[1] >= '1' && s[1] <= '9' && ch(s[2]))	return 1;
	if(s[0] == '1' && s[1] >= '0' && s[1] <= '8' && ch(s[2]))	return 1;
	return 0;
}

bool check(char x,char y)
{
	if((x == 'A' && y == 'B') || (x == 'B' && y == 'C') || (x == 'B' && y == 'A') || (x == 'C' && y == 'B'))
	{
		return 1;
	}
	return 0;
}

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(!lc(c1) || !ls(s1) || !lc(c2) || !ls(s2))
	{
		cout << "0000";
		return 0;
	}
	
	if(c1 == c2)
	{
		cout << "1";
		if(s1.substr(0,2) == s2.substr(0,2))
		{
			cout << "1";
			if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D'))
			{
				cout << "1";
				if(s1[2] >= 'D' && s2[2] >= 'D')
				{
					cout << "1";
				}
				else if(check(s1[2],s2[2]))
				{
					cout << "1";
				}
				else	cout << "0";
			}
			else
			{
				cout << "00";
			}
		}
		else
		{
			cout << "000";
		}
	}
	else
	{
		cout << "0000";
	}
	
	return 0;
}
