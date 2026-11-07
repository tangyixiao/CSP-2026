#include<bits/stdc++.h>
using namespace std;
int a,n,m,n1;
string s,s1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.ans","w",stdout);
	cin>>n>>s>>n1>>s1;
	if(n==n1)
	{
		cout<<"1";
		
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s[0]==s1[0]&&s[1]==s1[1])
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(s[2]=='A'&&s1[2]=='B')
	{
		cout<<1;
	}
	else if(s[2]=='B'&&s1[2]=='A')
	{
		cout<<1;
	}
	else if(s[2]=='A'&&s1[2]=='C')
	{
		cout<<1;
	}
	else if(s[2]=='C'&&s1[2]=='A')
	{
		cout<<1;
	}
	else if(s[2]=='B'&&s1[2]=='C')
	{
		cout<<1;
	}
	else if(s[2]=='C'&&s1[2]=='B')
	{
		cout<<1;
	}
	else if(s[2]=='D'&&s1[2]=='F')
	{
		cout<<1;
	}
	else if(s[2]=='F'&&s1[2]=='D')
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(s[2]=='A'&&s1[2]=='B')
	{
		cout<<1;
	}
	else if(s[2]=='B'&&s1[2]=='A')
	{
		cout<<1;
	}
	else if(s[2]=='C'&&s1[2]=='B')
	{
		cout<<1;
	}
	else if(s[2]=='B'&&s1[2]=='C')
	{
		cout<<1;
	}
	else if(s[2]=='F'&&s1[2]=='D')
	{
		cout<<1;
	}
	else if(s[2]=='D'&&s1[2]=='F')
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
