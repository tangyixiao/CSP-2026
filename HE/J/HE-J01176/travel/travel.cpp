#include <bits/stdc++.h>
using namespace std;
string cc1,ss1,cc2,ss2,daan="0000";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> cc1 >> ss1 >> cc2 >> ss2;
	if (cc1==cc2)
	{
		daan[0]='1';
	}
	if (daan[0]=='1')
	{
		if (ss1[0]==ss2[0] && ss1[1]==ss2[1])
		{
			daan[1]='1';
			if (((ss1[2]>='A' && ss1[2]<='C') && (ss2[2]>='A' && ss2[2]<='C')) || ((ss1[2]>='D' && ss1[2]<='F') && (ss2[2]>='D' && ss2[2]<='F')))
			{
				daan[2]='1';
				if (ss1[2]>ss2[2])
				{
					if (ss1[2]-ss2[2]==1)
					{
						daan[3]='1';
					}
					else if (ss1[2]=='F' && ss2[2]=='D')
					{
						daan[3]='1';
					}
				}
				else
				{
					if (ss2[2]-ss1[2]==1)
					{
						daan[3]='1';
					}
					else if (ss2[2]=='F' && ss1[2]=='D')
					{
						daan[3]='1';
					}
				}
			}
		}

	}
	cout << daan;
	return 0;
}
