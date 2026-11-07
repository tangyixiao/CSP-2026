#include <bits/stdc++.h>
using namespace std;

int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string s3 = s1.substr(0,2),s4 = s2.substr(0,2);
	char s5 = s1[2],s6 = s2[2];
	if (c1 == c2)
	{
		cout << 1;
		if (s3 == s4)
		{
			cout << 1;
			if ((s5 >= 'A' && s5 <= 'C' && s6 >= 'A' && s6 <= 'C') || (s5 >= 'D' && s5 <= 'E' && s6 >= 'D' && s6 <= 'E'))
			{
				cout << 1;
				int a = int(s5),b = int(s6);
				if (abs(a-b) == 1)
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
				cout << "00";
				return 0;
			}
		}
		else
		{
			cout << "000";
			return 0;
		}
	}
	else
	{
		cout << "0000";
	}
	return 0;
}