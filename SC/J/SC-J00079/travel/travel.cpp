#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool reason()
{
	if (s1[2]<='C'&&s2[2]<='C')
		return true;
	else if (s1[2]>'C'&&s2[2]>'C'&&s1[2]<='F'&&s2[2]<='F')
		return true;
	else
		return false;
}	
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a=0,b=0,c=0,d=0;
	if (c1==c2)
	{
		a=1;
		if (s1[0]==s2[0]&&s1[1]==s2[1])
		{
			b=1;
			if (reason())
			{
				c=1;
				if (abs(s1[2]-s2[2])==1)
					d=1;
				else
					d=0;
			}
			else
				c=0;
		}
		else
			b=0;
	}
	else
		a=0;
	printf("%d%d%d%d",a,b,c,d);
	return 0;
}