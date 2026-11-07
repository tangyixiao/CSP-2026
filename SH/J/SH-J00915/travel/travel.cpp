#include<bits/stdc++.h>
using namespace std;
int n,m;
string s,t;
bool ans[10];
int f;
bool check(char x,char y)
{
	if(x=='A'&&y=='B')
	{
		return 1;
	}
	else if(x=='B'&&y=='A')
	{
		return 1;
	}
	else if(x=='B'&&y=='C')
	{
		return 1;
	}
	else if(x=='C'&&y=='B')
	{
		return 1;
	}
	else if(x=='D'&&y=='F')
	{
		return 1;
	}
	else if(x=='F'&&y=='D')
	{
		return 1;
	}
	return 0;
}
bool checkc(char x,char y)
{
	if(x=='A'&&y=='B')
	{
		return 1;
	}
	else if(x=='A'&&y=='C')
	{
		return 1;
	}
	else if(x=='B'&&y=='A')
	{
		return 1;
	}
	else if(x=='B'&&y=='C')
	{
		return 1;
	}
	else if(x=='C'&&y=='A')
	{
		return 1;
	}
	else if(x=='C'&&y=='B')
	{
		return 1;
	}
	else if(x=='D'&&y=='F')
	{
		return 1;
	}
	else if(x=='F'&&y=='D')
	{
		return 1;
	}
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	cin>>n>>s;
	cin>>m>>t;
	if(n==m)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(n==m&&s[1]==t[1]&&s[0]==t[0])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(n==m&&s[1]==t[1]&&s[0]==t[0]&&checkc(s[2],t[2])==1)
	{
		f=1;
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(f==1&&check(s[2],t[2])==1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
