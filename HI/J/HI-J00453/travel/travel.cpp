#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1,a=0,b=0,c=0,d=0,c3,s3,c_20,s_20,c_21,s_21;
	string c2,s2;
	cin>>c1>>c2>>s1>>s2;
	if(c1==s1)
	{
		a=1;
		c_20=c2[0]-'0';
		c_21=c2[1]-'0';
		s_20=s2[0]-'0';
		s_21=s2[1]-'0';
		if(c_20==s_20&&c_21==s_21)
		{
			b=1;
			if((c2[2]>='A'&&c2[2]<='C')&&(s2[2]>='A'&&s2[2]<='C')||(c2[2]>='D'&&c2[2]<='F')&&(s2[2]>='D'&&s2[2]<='F'))
			{
				c=1;
				c3=s2[2];
				s3=c2[2];
				if(c3+1==s3||c3-1==s3||s3+1==c3||s3-1==c3)
				{
					if(c2[2]=='D'||c2[2]=='F'&&s2[2]=='D'||s2[2]=='F')
					{
						d=0;
					}
					else
					{
						d=1;
					}
				}
			}
			else
			{
				c=0;
			}
		}
		else
		{
			b=0;
		}
	}
	else
	{
		a=0;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
	return 0;	
}  
