#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
	{
		if (s1.substr(0,2) == s2.substr(0,2))
		{
			if ((s1[2] - 'A' <= 2 && s2[2] - 'A' <= 2) || (s1[2] - 'A' >= 3 && s2[2] - 'A' >= 3))
			{
				if (abs(s1[2] - s2[2]) == 1)
				{
					cout << "1111";
				}
				else
				{
					cout << "1110";
				}
			}
			else
			{
				cout << "1100";
			}
		}
		else
		{
			cout << "1000";
		}
	}
	else
	{
		cout << "0000";
	}
	return 0;
} 
