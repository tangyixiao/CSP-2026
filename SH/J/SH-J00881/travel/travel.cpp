#include <bits/stdc++.h>
using namespace std;
bool check1(char a,char b)
{
	if(a=='A' &&(b=='B'||b=='C'))
	{
		return 1;
	}
	if(a=='B' &&(b=='A'||b=='C'))
	{
		return 1;
	}
	if(a=='C' &&(b=='A'||b=='B'))
	{
		return 1;
	}
	if(a=='D' && b=='F')
	{
		return 1;
	}
	if(a=='F' && b=='D')
	{
		return 1;
	}
	return 0;
}
bool check2(char a,char b)
{
	if(a=='A' &&b=='B')
	{
		return 1;
	}
	if(a=='B' &&(b=='A'||b=='C'))
	{
		return 1;
	}
	if(a=='C' &&b=='B')
	{
		return 1;
	}
	if(a=='D' && b=='F')
	{
		return 1;
	}
	if(a=='F' && b=='D')
	{
		return 1;
	}
	return 0;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(((s1[0]-'0')*10+s1[1]-'0')==((s2[0]-'0')*10+s2[1]-'0'))
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(check1(s1[2],s2[2]))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(check2(s1[2],s2[2]))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;	
} 
