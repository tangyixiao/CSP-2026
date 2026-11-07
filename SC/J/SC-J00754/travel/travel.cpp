#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool c=1,p=1,b=1,x=1;
	if(c1!=c2)
	{
		c=0;p=0;b=0;x=0;
	}
	else
	{
		if(s1[0]!=s2[0]||s1[1]!=s2[1])
		{
			p=0;b=0;x=0;
		}
		else
		{
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]>='D'))
			{
				if(s1[2]<='C')
				{
					if(s1[2]+1!=s2[2]&&s1[2]-1!=s2[2])
					{
						x=0;
					}
				}
			}
			else
			{
				b=0;x=0;
			}
		}
	}
	cout<<c<<p<<b<<x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}