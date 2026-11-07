#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ans="";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		ans=ans+'1';
		if((s1[0]+s1[1])==(s2[0]+s2[1]))
		{
			ans=ans+'1';
			char a=s1[2];
			char b=s2[2];
			if((a+b=='D'+'F')||(a+b<='C'+'B'))
			{
				ans=ans+'1';
				if(a+b=='D'+'F')
				{
					ans=ans+'1';
				}
				else if(a+b<='C'+'B')
				{
					if((a-b==1)||(a-b==-1))
					{
						ans=ans+'1';
				    }
				    else
				    {
				    	ans=ans+'0';
					}
				}
				else
				{
					ans=ans+'0';
				}
			}
			else
			{
				ans=ans+"00";
			}
		}
		else
		{
			ans=ans+"000";
		}
	}
	else
	{
		ans=ans+"0000";
	}
	cout<<ans;
	return 0;
}