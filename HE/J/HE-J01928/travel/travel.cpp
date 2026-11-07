#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int rc,rp,xc,xp;
bool tc(char x,char y)
{
	if(x=='A')
	{
		if(y=='B'||y=='C')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='B')
	{
		if(y=='A'||y=='C')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='C')
	{
		if(y=='A'||y=='B')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='D')
	{
		if(y=='F')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='F')
	{
		if(y=='D')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
bool xl(char x,char y)
{
	if(x=='A')
	{
		if(y=='B')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='B')
	{
		if(y=='A'||y=='C')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='C')
	{
		if(y=='B')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='D')
	{
		if(y=='F')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if(x=='F')
	{
		if(y=='D')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	rc=(c1[0]-'0')*10+c1[1]-'0';
	rp=(s1[0]-'0')*10+s1[1]-'0';
	xc=(c2[0]-'0')*10+c2[1]-'0';
	xp=(s2[0]-'0')*10+s2[1]-'0';
	if(rc==xc)
	{
		if(rp==xp)
		{
			if(tc(s1[2],s2[2]))
			{
				if(xl(s1[2],s2[2]))
				{
					cout<<"1111";
				}
				else
				{
					cout<<"1110";
				}
			}
			else
			{
				cout<<"1100";
			}
		}
		else
		{
			cout<<"1000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
