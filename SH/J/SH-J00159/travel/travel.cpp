#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2)
	{
		cout << "0000";
	}
	else
	{
		cout << "1";
		string s1a,s2a,s1b,s2b;
		s1a = s1[0] + s1[1];
		s2a = s2[0] + s2[1];
		if (s1a != s2a)
		{
			cout << "000";
		}
		else
		{
			cout << "1";
			s1b = s1[2];
			s2b = s2[2];
			if (!((s1b == "A" && s2b == "B") || (s1b == "B" && s2b == "A") || (s1b == "A" && s2b == "C") || (s1b == "C" && s2b == "A") || (s1b == "B" && s2b == "C") || (s1b == "C" && s2b == "B") || (s1b == "D" && s2b == "F") || (s1b == "F" && s2b == "D")))
			{
				cout << "00";
			}
			else
			{
				cout << "1";
				if ((s1b == "A" && s2b == "C") || (s1b == "C" && s2b == "A"))
					cout << "0";
				else
					cout << "1";
			}
		}
	}
	return 0;
}
