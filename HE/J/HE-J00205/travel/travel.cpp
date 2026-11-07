#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0); 
	string c1,c2,s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int xiang1 = (c1[0] - '0') * 10 + (c1[1] - '0');
	int xiang2 = (c2[0] - '0') * 10 + (c2[1] - '0');
	int pai1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int pai2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	int seat1 = s1[2] - 'A' + 1;int seat2 = s2[2] - 'A' + 1;
	if(xiang1 == xiang2)
	{
		cout << 1;
		if(pai1 == pai2)
		{
			cout << 1;
			if(((seat1 == 1 || seat1 == 2 || seat1 == 3) && (seat2 == 1 || seat2 == 2 || seat2 == 3)) || ((seat1 == 4 || seat1 == 5) && (seat2 == 4 || seat2 == 5)))
            {
                cout << 1;
				if((seat1 - seat2 == 1) || (seat2 - seat1 == 1))
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
				cout << 0 << 0;
			}			
		}
		else
		{
			cout << 0 << 0 << 0;
		}
	}
	else
	{
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
} 
