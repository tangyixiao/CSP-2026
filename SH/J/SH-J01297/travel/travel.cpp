#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0,b=0,c=0,d=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)
	{
		a=1;
		if (s1[0]-'0'==s2[0]-'0'&&s1[1]-'0'==s2[1]-'0')
		{
			b=1;
			if(s1[2]-'A'<=2&&s2[2]-'A'<=2)
			{
				c=1;
				if (s1[2]-'A'==1 || s2[2]-'A'==1)
				{
					d=1;
				}
			}
			else
			{
				if(s1[2]-'A'>2&&s2[2]-'A'>2)
				{
					c=1;
					d=1;//同为大一定相邻 
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}
