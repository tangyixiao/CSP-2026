#include <bits/stdc++.h>
using namespace std;
char c1[5],c2[5],s1[5],s2[5];
int main()
{
	freopen("travel.in","/r",stdin);
	freopen("travel.out","/w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0] and c1[1]==c2[1])
	{
		cout<<"1";
		if(s1[0]==s2[0] and s1[1]==s2[1])
		{
			cout<<"1";
			if(s1[2]=='A')
			{
				if(s2[2]=='B')
				{
					cout<<"11";
					return 0;
				}
				else if(s2[2]=='C')
				{
					cout<<"10";
					return 0;
				}
				else
				{
					cout<<"00";
					return 0;
				}
			}
			else if(s1[2]=='B')
			{
				if(s2[2]=='A' or s2[2]=='C')
				{
					cout<<"11";
					return 0;
				}
				else
				{
					cout<<"00";
					return 0;
				}
			}
			else if(s1[2]=='C')
			{
				if(s2[2]=='B')
				{
					cout<<"11";
					return 0;
				}
				else if(s2[2]=='A')
				{
					cout<<"10";
					return 0;
				}
				else
				{
					cout<<"00";
					return 0;
				}
			}
			else if(s1[2]=='D' and s2[2]=='E' or s1[2]=='E' and s2[2]=='D')
			{
				cout<<"11";
				return 0;
			}
			else
			{
				cout<<"00";
				return 0;
			}
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	return 0;
}
