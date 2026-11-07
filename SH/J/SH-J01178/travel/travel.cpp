#include <bits/stdc++.h>
using namespace std;
string s1, s2, c1, c2, s = "";
int n1, n2, a1, a2;
int main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	n1 += 10 * int(c1[0] - '0');
	n1 += int(c1[1] - '0');
	n2 += 10 * int(c2[0] - '0');
	n2 += int(c2[1] - '0');
	a1 += 10 * int(s1[0] - '0');
	a1 += int(s1[1] - '0');
	a2 += 10 * int(s2[0] - '0');
	a2 += int(s2[1] - '0');
	if (n1 == n2)
	{
		s += "1";
		if (a1 == a2)
		{
			s += "1";
			if (s1[2] <= 'C' && s2[2] <= 'C')
			{
				s += "1";
				if (s1[2] == 'B' || s2[2] == 'B')
					s += "1";
				else
					s += "0";
			}
			else if (s1[2] > 'C' && s2[2] > 'C')
				s += "11";
			else
				s += "00";
		}
		else
			s += "000";
	}
	else
	{
		s += "0000";
	}
	cout << s;
	return 0;
}
