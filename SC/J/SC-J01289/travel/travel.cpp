#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,u,m,e,i,j;
string s[5],ss;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(i=1;i<=4;i++)
	{
		cin>>s[i];
	}
	if(s[1]==s[3])
	{
		ss+='1';
	}
	else
	{
		ss="0000";
		cout<<ss;
		return 0;
	}
	for(i=0;i<2;i++)
	{
		n=n*10+int(s[2][i])-48;
		m=m*10+int(s[4][i])-48;
	}
	if(n==m)
	{
		ss+='1';
	}
	else
	{
		ss="1000";
		cout<<ss;
		return 0;
	}
	if(s[2][2]>='A'&&s[2][2]<='C'&&s[4][2]>='A'&&s[4][2]<='C')
	{
		ss="111";
	}
	else if(s[2][2]>='D'&&s[2][2]<='F'&&s[4][2]>='D'&&s[4][2]<='F')
	{
		ss="1111";
	}
	else
	{
		ss="1100";
		cout<<ss;
		return 0;
	}
	if(s[2][2]>='A'&&s[2][2]<='c'&&s[4][2]>='A'&&s[4][2]<='c')
	{
		if(max(int(s[2][2]),int(s[4][2]))-min(int(s[2][2]),int(s[4][2]))==1)
		{
			ss="1111";
		}
		else
		{
			ss="1110";
		}
	}
	cout<<ss;
	return 0;
}