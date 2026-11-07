#include <bits/stdc++.h>
using namespace std;
int c1,s1;
string c2,s2;
int main()
{
	freofen("travel.in",'w');
    freofen("travel.out",'w');
    cin >> c1 >> c2 >> s1 >> s2;
	if (c1 != s1)
	{
		cout << '0000';
	}
	else
	{
		cout << 1;
		int r1 = (c2[0] - '0') * 10 + (c2[1] - '0'),x1 = (s2[0] - '0') * 10 + (s2[1] - '0');
		char r2 = c2[2],x2 = s2[2];
		if(r1 != x1)
		{
			cout << '000';
		}
		else
		{
			cout << 1;
			if ((r2 <= 'C' && r2 >= 'A' && x2 <= 'C' && x2 >= 'A') || (r2 == 'F' && r2 == 'D' && x2 == 'F' && x2 == 'D'))
			{
				cout << 1;
				if (r2 == 'F' && r2 == 'D' && x2 == 'F' && x2 == 'D')
				{
					cout << 1;
				}
				else if((r2 - x2 == 1 || x2 - r2 == 1) && r2 != 'D' && x2 != 'D')
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
				cout << '00';
			}
		}
	}
	return 0;
} 