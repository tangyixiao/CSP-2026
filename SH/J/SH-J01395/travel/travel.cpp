#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	string x1,x2;
	char y1,y2;
	for(int i=0;i<3;i++)
	{
		if(s1[i]==s2[i])
		{
		}
		else
		{
			cout<<0<<0<<0;
			return 0;
		}
	}
	cout<<1;
	y1=s1[2];
	y2=s2[2];
	if(y1>='A'&&y1<='C'&&y2>='A'&&y2<='C')
	{
		cout<<1;
	}
	else if(y1=='D'||y1=='F'&&y2=='D'||y2=='F')
	{
		cout<<1<<1;
		return 0;
	}
	else
	{
		cout<<0<<0;
		return 0;
	}
	if(y1=='A'&&y2=='B')
	{
		cout<<1;
	}
	else if(y1=='B'&&y2=='C'||y2=='A')
	{
		cout<<1;
	}
	else if(y1=='C'&&y2=='B')
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
} 
