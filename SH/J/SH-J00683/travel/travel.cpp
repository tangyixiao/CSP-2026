#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
	{
		cout << 1;
		char sit1 = s1[2], sit2 = s2[2];
		if (s1.substr(0, 2) == s2.substr(0, 2))
		{
			cout << 1;
			if ((sit1 < 'D' && sit2 < 'D') || (sit1 > 'C' && sit2 > 'C'))
			{
				cout << 1;
			}
			else
			{
				cout << 0;
			}
			
			if (abs(sit1 - sit2) == 1)
			{
				if (min(sit1, sit2) == 'C' && max(sit1, sit2) == 'D')
				{
					cout << 0;
				}
				else
				{
					cout << 1; 
				}
			}
			else
			{
				cout << 0;
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
	cout << "\n";
	return 0;
}
