#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c1,s1;
	cin >> c >> s >> c1 >> s1;
	if (c == c1)
	{
		cout << 1;
		if (s[1] == s1[1])
		{
			cout << 1;
			if ((s[2] - 'A' < 3 && s1[2] - 'A' < 3) || (s[2] - 'A' >= 3 && s1[2] - 'A' >= 3))
			{
				cout << 1;
				if ((s[2] == 'A' && s1[2] == 'B')||(s1[2] == 'A' && s[2] == 'B')||(s[2] == 'B' && s1[2] == 'C')||(s1[2] == 'B' && s[2] == 'C')||(s[2] == 'D' && s1[2] == 'E')||(s1[2] == 'D' && s[2] == 'E'))
				{
					cout << 1;
				}
				else
				{
					cout << 0;
				}
			}
			else
			{
				cout << 00;
			}
		}
		else
		{
			cout << 000;
		}
	}
	else
	{
		cout << 0000;
	}
	return 0;
 } 
