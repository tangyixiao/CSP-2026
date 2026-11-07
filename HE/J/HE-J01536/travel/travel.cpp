#include<bits/stdc++.h>
using namespace std;
string s1,si1,s2,si2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1 >> si1 >> s2 >> si2;
	if(s1 == s2)
	{
		if(si1[0] == si2[0] && si1[1] == si2[1])
		{
			if((si1[2] <= 'C' && si2[2] <= 'C') || (si1[2] >= 'D' && si2[2] >= 'D'))
			{
				if(abs(si1[2]-si2[2]) == 1)
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
