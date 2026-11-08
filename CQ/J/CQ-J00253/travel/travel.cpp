#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,s,a,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C')
	{
		a=1;
	}
	else
	{
		a=2;
	}
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C')
	{
		b=1;
	}
	else
	{
		b=2;
	}
	if(c1==c2)
	{
		s+='1';
		if(s1[0]==s2[0])
		{
			if(s1[1]==s2[1])
			{
				s+='1';
				if(a==b)
				{
					s+='1';
					if(s1[2]+1==s2[2] || s1[2]-1==s2[2])
					{
						s+='1';
					}
					else
					{
						s+='0';
					}
				}
				else
				{
					s+="00";
				}
			}
			else
			{
				s+="000";
			}
		}
		else
		{
			s+="000";
		}
	}
	else
	{
		s="0000";
	}
	cout<<s;
	return 0;
} 
