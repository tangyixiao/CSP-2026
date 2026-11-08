#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,p,j;
	cin>>c>>p>>s>>j;
	if(c!=s)
	{
		cout<<0000;
		return 0;
	}
	else
	{
		if(p[0]+p[1]!=j[0]+j[1])
		{
			cout<<1000;
			return 0;
		}
		else
		{
			if(((p[2]>='A' && p[2]<='C') && (j[2]>='D' && j[2]<='F')) || ((j[2]>='A' && j[2]<='C') && (p[2]>='D' && p[2]<='F')))
			{
				cout<<1100;
				return 0;
			}
			else
			{
				if((p[2]=='D' && j[2]=='F') || (j[2]=='D' && p[2]=='F'))
				{
					cout<<1111;
					return 0;
				}
				else
				{
					if(p[2]<j[2])
					{
						if(p[2]+1==j[2])
						{
							cout<<1111;
							return 0;
						}
						else
						{
							cout<<1110;
							return 0;
						}
					}
					else
					{
						if(j[2]+1==p[2])
						{
							cout<<1111;
							return 0;
						}
						else
						{
							cout<<1110;
							return 0;
						}
					}
				}
			}
		}
	}
	return 0;
} 
