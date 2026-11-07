#include<bits/stdc++.h>
using namespace std;
int i,j,c1,c2,x,p,c,l;
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2&&c1!=1&&c2!=1&&c1!=16&&c2!=16)
	{
		x=1;
		if(s1[1]==s2[1])
		{
			p=1;
			if(s1[2]<='C' && s2[2]<='C' && s1[2]>='A' && s2[2]>='A' && s1!=s2)
				c=1;
			else
			{
				if(s1[2]=='F' && s2[2]=='D')
					c=1;
				else
				{
					if(s1[2]=='D' && s2[2]=='F')
						c=1;	
					else
					{
						cout<<x<<p<<c<<l;
						return 0;				
					}	
				}
			}
		}
		else
		{
			cout<<x<<p<<c<<l;
			return 0;
		}
	}
	else
	{
		cout<<x<<p<<c<<l;
		return 0;			
	}	
	if(s1[2]-s2[2]==1 || s1[2]-s2[2]==1 && s1!=s2)
	{
		l=1;
		cout<<x<<p<<c<<l;
		return 0;
	}
	else
	{
		if(s1[2]=='C' && s2[2]=='D')
		{
			cout<<x<<p<<c<<l;
			return 0;	 
		}
		else
		{
			if(s1[2]=='D' && s2[2]=='C')
			{
				cout<<x<<p<<c<<l;
				return 0;	 		
			}
			else
			{
				if(s1[2]-s2[2]==2 || s1[2]-s2[2]==2)
				{
					cout<<x<<p<<c<<l;
					return 0;	 						
				}
				else
				{
					l=1;
					cout<<x<<p<<c<<l;
					return 0;				
				}
			}
		}
	}	
	fclose(stdin);
	fclose(stdout);
	return 0;	
} 
