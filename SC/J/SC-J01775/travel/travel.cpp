#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1[0]==c2[0]&&c1[1]==c2[1])
	{
		if (s1[0]==s2[0]&&s1[1]==s2[1])
		{
			if ((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))
			{
				if ((s1[2]=='A'&&s2[2]=='C')||(s2[2]=='A'&&s1[2]=='C'))
				{
					ans="1110";
				}
				else
				{
					ans="1111";
				}
		    }
		    else if ((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))
		    {
		    	ans="1111";
			}
			else
			{
				ans="1100";
			}
		}
		else
		{
			ans="1000";
		}
	}
	else
	{
		ans="0000";
	}
	cout << ans;
	return 0;
}