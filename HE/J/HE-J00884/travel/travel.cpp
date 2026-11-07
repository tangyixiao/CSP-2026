#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2; 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool ff=0;
	if(c1==c2)
	{
		cout<<"1";
		ff=1;
	}
	else
	{
		cout<<"0";
	}
	string st1=s1.substr(0,2);
	string st2=s2.substr(0,2);
	bool f=0;
	if(st1==st2&&ff)
	{
		cout<<"1";
		f=1;
	}
	else
	{
		cout<<"0";
	}
	char a=s1[2];
	char b=s2[2];
	bool s=0;
	if((a=='B'||a=='C'||a=='A')&&(b=='B'||b=='C'||b=='A')&&f)
	{
		cout<<"1";
		s=1;
	}
	else if((a=='F'||a=='D')&&(b=='F'||b=='D')&&f)
	{
		cout<<"1";
		s=1;
	}
	else
	{
		cout<<"0";
	}
	if(s==0)
	{
		cout<<"0";
	}
	else
	{
		if(a+1==b||a-1==b)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
	}
	return 0;
 } 
