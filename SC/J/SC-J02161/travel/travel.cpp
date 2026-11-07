#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check(char x,char y)
{
	if(x=='A'|| x=='B' || x=='C')
	{
		if(y=='A'|| y=='B'|| y=='C')
		{
			return true;
		}
	}
	if(x=='D'|| x=='F')
	{
		if(y=='D'|| y=='F')
		{
			return true;
		}
	}
	return false;
}
bool pd(char x,char y)
{
	if(x==y+1 || x==y-1)
	{
		if(x!='C' && y!='D')
		{
			if(x!='D' && y!='C')
			{
				return true;
			}
		}
	}
	return false;
}
bool vis[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	for(int i=1;i<=3;i++)
	{
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=1;i<=3;i++)
	{
		cin>>s2[i];
	}
	if(c1==c2)
	{
		vis[1]=true;
	}
	else
	{
		vis[1]=false;
	}
	if(c1==c2 && s1[1]==s2[1] && s1[2]==s2[2])
	{
		vis[2]=true;
	}
	else
	{
		vis[2]=false;
	}
	if(c1==c2 && s1[1]==s2[1] && s1[2]==s2[2] && check(s1[3],s2[3]))
	{
		vis[3]=true;
	}
	else
	{
		vis[3]=false;
	}
	if(c1==c2 && s1[1]==s2[1] && s1[2]==s2[2] && check(s1[3],s2[3]) && pd(s1[3],s2[3]))
	{
		vis[4]=true;
	}
	else
	{
		vis[4]=false;
	}
	for(int i=1;i<=4;i++)
	{
		if(vis[i])
		{
			cout<<'1';
		}
		else
		{
			cout<<'0';
		}
	}
}