#include<bits/stdc++.h>
using namespace std;
bool check(char a,char b)
{
	if(a=='A'&&b=='D')return false;
	if(a=='A'&&b=='F')return false;
	if(a=='B'&&b=='D')return false;
	if(a=='B'&&b=='F')return false;
	if(a=='C'&&b=='D')return false;
	if(a=='C'&&b=='F')return false;
	return true;
}
bool check1(char a,char b)
{
	if(a=='A'&&b=='B')return true;
	if(a=='B'&&b=='C')return true;
	if(a=='B'&&b=='A')return true;
	if(a=='C'&&b=='B')return true;
	if(a=='D'&&b=='F')return true;
	if(a=='F'&&b=='D')return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d; 
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(b[1]!=d[1]||b[0]!=d[0])
	{
		cout<<"000";
		return 0;
	}
	cout<<1;
	if(!check(b[2],d[2])||!check(d[2],b[2]))
	{
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(check1(b[2],d[2]))cout<<1;
	else cout<<0;	 
	return 0;
 } 
