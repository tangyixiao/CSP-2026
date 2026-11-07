#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;
bool side(char x)
{
	if (x == 'A' || x == 'B' || x == 'C')
	{
		return true;
	}
	return false;
}
bool check(char x, char y)
{
	return ((x == 'A' && y == 'B') || (x == 'B' && y == 'C') || (x == 'D' && y == 'F'));
}
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int ans = 0;
	if (c1 == c2)
	{
		ans++;
		if (s1[0] == s2[0] && s1[1] == s2[1])
		{
			ans++;
			if (side(s1[2]) == side(s2[2]))
			{
				ans++;
				if (check(s1[2], s2[2]))
				{
					ans++;
				}
			}
		}
	}
	for (int i = 1; i <= ans; i++)
	{
		cout << 1;
	}
	for (int i = 1; i <= 4 - ans; i++)
	{
		cout << 0;
	}
	return 0;
}
