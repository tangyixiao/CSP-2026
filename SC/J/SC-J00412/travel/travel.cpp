#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string c1,s1,c2,s2;
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
	string s11,s22;
	s11+=s1[0]+s1[1];
	s22+=s2[0]+s2[1];
	if(s11==s22)
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	s11=s1[2];
	s22=s2[2];
	if((s11=="A"||s11=="B"||s11=="C")
	&&(s22=="A"||s22=="B"||s22=="C"))
	{
		cout<<1;
	}
	else if((s11=="D"||s11=="F")
	&&(s22=="D"||s22=="F"))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	char a=s11[0];
	char b=s22[0];
	int ok=abs(a-b);
	if(ok==1&&!((a=='C'&&b=='D')||(a=='D'&&b=='C')))
	{
		cout<<1;
		return 0;
	}
	else
	{
		cout<<0;
		return 0;
	}
	return 0;
}