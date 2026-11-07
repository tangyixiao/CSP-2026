#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int c=0; 
	if(c1[0]==c2[0]&&c1[1]==c2[1])
	{
		cout<<1;
		c=1;
	}
	else
	{
		cout<<0;
	
		
	}
	int a=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&c)
	{
		cout<<1;
		a=1;
	}
	else
	{
		cout<<0;
	}
	int b=1;
	if(a&&c)
	{
		if(s2[2]=='A'&&(s1[2]=='B'||s1[2]=='C'))
		{
			cout<<1;
		}
		else if(s2[2]=='B'&&(s1[2]=='A'||s1[2]=='C'))
		{
			cout<<1;
		}
		else if(s2[2]=='C'&&(s1[2]=='B'||s1[2]=='A'))
		{
			cout<<1;
		}
		else if(s2[2]=='D'&&s1[2]=='F')
		{
			cout<<1;
		}
		else if(s2[2]=='F'&&s1[2]=='D')
		{
			cout<<1;
		}
		else
		{
			b=0;
			cout<<0;
		}
	}
	else
	{
		cout<<0;
	}
	if(a&&c&&b)
	{
		if(s2[2]=='A'&&s1[2]=='B')
		{
			cout<<1;
		}
		else if(s2[2]=='B'&&(s1[2]=='A'||s1[2]=='C'))
		{
			cout<<1;
		}
		else if(s2[2]=='C'&&s1[2]=='B')
		{
			cout<<1;
		}
		else if(s2[2]=='D'&&s1[2]=='F')
		{
			cout<<1;
		}
		else if(s2[2]=='F'&&s1[2]=='D')
		{
			cout<<1;
		}
		else
		{
			
			cout<<0;
		}
	}
	else
	{
		cout<<0;
	}
	return 0;
 } 
