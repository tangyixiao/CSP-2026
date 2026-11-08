#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2,p1,p2,p3,p4;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
	{
		p1 = "1";
		if (s1[0] == s2[0] && s1[1] == s2[1])
		{
			p2 = "1";
		}
		else
		{
			p2 = "0";
		}
		if (s1[2]-'A' <= 2 && s2[2]-'A' <= 2)
		{
			p3 = "1";
			if (s1[2]-'A' + s2[2]-'A' == 2)
			{
				p4 = "0";
			}
			else
			{
				p4 = "1";
			}
		}
		else if (s1[2]-'A' >= 3 && s2[2]-'A' >= 3)
		{
			p3 = "1";
			p4 = "1";
		}
		else
		{
			p3 = "0";
			p4 = "0";
		}
	}
	else
	{
		p1 = "0";
		p2 = "0";
		p3 = "0";
		p4 = "0";
	}
	cout << p1+p2+p3+p4;
	return 0;
}
