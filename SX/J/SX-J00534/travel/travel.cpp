#include <bits/stdc++.h>
using namespace std;

char c1[10], s1[10], c2[10], s2[10];

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	scanf("%s%s%s%s", c1 + 1, s1 + 1, c2 + 1, s2 + 1);
	if (c1[1] == c2[1] && c1[2] == c2[2])
	{
		cout << 1;
		if (s1[1] == s2[1] && s1[2] == s2[2])
		{
			cout << 1;
			if ((s1[3] <= 'C' && s2[3] <= 'C') || (s1[3] >= 'D' && s2[3] >= 'D'))
			{
				cout << 1;
				if (abs(s1[3] - s2[3]) == 1)
				{
					cout << 1;
				}
				else
					cout << 0;
			}
			else
				cout << "00";
		}
		else
			cout << "000";
	}
	else
		cout << "0000";
	return 0;
}