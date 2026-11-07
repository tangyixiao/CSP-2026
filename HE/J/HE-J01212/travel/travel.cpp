#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
string ti,tii;
string t,tt;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
	}//che xiang
	else
	{
		cout<<"0000";
		return 0;
	}
	
	ti=s1[0]+s1[1];
	tii=s2[0]+s2[1];
	if(ti==tii)
	{
		cout<<"1";
	} 
	else
	{
		cout<<"000";
		return 0;
	}//pai
	
	if(s1[2]-'0'<=19)
	{
		t=1;
	}
	else
	{
		t=2;
	}
	if(s2[2]-'0'<=19)
	{
		tt=1;
	}
	else
	{
		tt=2;
	}
	if(t==tt)
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	
	if((s1[2]=='A' && s2[2]=='B') || (s1[2]=='B' && s2[2]=='C') || (s1[2]=='B' && s2[2]=='A') || (s1[2]=='C' && s2[2]=='B') || (s1[2]=='D' && s2[2]=='F') || (s1[2]=='F' && s2[2]=='D'))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
