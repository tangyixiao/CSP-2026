#include <bits/stdc++.h>

using namespace std;

int h1,h2,si1,si2;
char l1,l2;
string c1,c2,s1,s2;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	h1 = int(s1[0]) * 10 + int(s1[1]);
	h2 = int(s2[0]) * 10 + int(s2[1]);
	l1 = char(s1[2]);
	l2 = char(s2[2]);
	if(l1 <= 'C') si1 == 1;
	if(l2 <= 'C') si2 == 1;
	if(c1 == c2)
	{
		cout << 1;
		if(h1 == h2)
		{
			cout << 1;
			if(si1 == si2)
			{
				cout << 1;
				if(l1 + 1 == l2 || l2 + 1 == l1)
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