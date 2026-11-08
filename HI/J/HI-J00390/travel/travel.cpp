#include<bits/stdc++.h>
using namespace std;
int o=0;
bool is(char a,char b)
{
	if(a=='A'||a=='B'||a=='C')
	{
		o=1;
		if(b=='A'||b=='B'||b=='C')
			return true;
		return false;
	}
	o=2;
	if(b=='D'||b=='F')
		return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s,_s,c,_c;
	cin>>c>>s>>_c>>_s;
	if(c!=_c)
	{
		for(int i=1;i<=4;i++)
			cout<<"0";
		return 0;
	}
	cout<<"1";
	string u="",_u="";
	u+=s[0]+s[1],_u+=_s[0]+_s[1];
	if(u!=_u)
	{
		for(int i=1;i<=3;i++)
			cout<<"0";
		return 0;
	}
	cout<<"1";
	if(!is(s[2],_s[2]))
	{
		for(int i=1;i<=2;i++)
			cout<<"0";
		return 0;
	}
	cout<<"1";
	if(o==2)
	{
		cout<<"1";
		return 0;
	}
	if(s[2]=='B'||_s[2]=='B')
	{
		cout<<"1";
		return 0;
	}
	cout<<"0";
	return 0;
}
