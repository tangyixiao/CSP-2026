#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
char c[5];
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
	{
		c[1] = '1';
		if (s1[0] == s2[0] && s1[1] == s2[1])
		{
			c[2] = '1';
			if (s1[2] - 'A' <= 2 && s2[2] - 'A' <= 2)
			{
				c[3] = '1';
				if (abs(s1[2] - s2[2]) == 1)
					c[4] = '1';
				else
					c[4] = '0';
			}
			else if (s1[2] - 'A' > 2 && s2[2] - 'A' > 2)
			{
				c[3] = '1';
				c[4] = '1';
			}
			else
			{
				c[3] = '0';
				c[4] = '0';
			}
		}
		else
		{
			c[2] = '0';
			c[3] = '0';
			c[4] = '0';
		}
	}
	else
	{
		cout << '0' << '0' << '0' << '0';
		return 0;
	}
	for (int i = 1; i <= 4; i++)
		cout << c[i];
	return 0;
}