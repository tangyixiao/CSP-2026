#include <bits/stdc++.h>
#define ll long long
using namespace std;
string c1, s1, c2, s2;
int cx1, cx2, pa1, pa2;

int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	cx1 = int(c1[0] - '0') + int(c1[1] - '0');
	cx2 = int(c2[0] - '0') + int(c2[1] - '0');
	if (cx1 == cx2)
	{

	}
	else
	{
		cout << "0000\n";
		return 0;
	}
	pa1 = int(s1[1] - '0');
	pa2 = int(s2[1] - '0');
	if (pa1 == pa2)
	{

	}
	else
	{
		cout << "1000\n";
		return 0;
	}
	char z1 = s1[2], z2 = s2[2];
	bool ABC[2], DF[2];
	for (int i = 0; i < 3; i++)
	{
		if (z1 == 'A' || z1 == 'B' || z1 == 'C')
		{
			ABC[0] = 1;
		}
		if (z2 == 'A' || z2 == 'B' || z2 == 'C')
		{
			ABC[1] = 1;
		}
		if (z1 == 'D' || z1 == 'D')
		{
			DF[0] = 1;
		}
		if (z2 == 'D' || z2 == 'F')
		{
			DF[1] = 1;
		}
	}

	if (DF[0] == DF[1] && DF[0] != 0 && DF[1] != 0)
	{
		cout << "1111\n";
		return 0;
	}
	bool f = 0;
	if (ABC[0] == ABC[1] && ABC[0] != 0 && ABC[1] != 0)
	{
		f = 1;
	}
	else
	{
		cout << "1100\n";
		return 0;
	}
	if (abs(int(z1) - int(z2)) == 1 && f == 1)
	{
		cout << "1111\n";
		return 0;
	}

	return 0;
}
