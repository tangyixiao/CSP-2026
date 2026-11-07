#include <bits/stdc++.h>;
using namespace std;
int main()
{
	freout("travel.in","r",stdin);
	freout("travel.out","w",stdout);
	int c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
	{
		cout << "1";
		if(s1[0] == s2[0] || s1[1] == s2[1])
		{
			cout << "1";
			if(s1[3] == A && s2[3] ==B)
			{
				cout << "11";
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
	return 0;
}
