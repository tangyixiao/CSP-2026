#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,s11,s22,s111,s222;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
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
	s11=s1[0]+s1[1];
	s22=s2[0]+s2[1];
	if(s11==s22)
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0<<0;
		return 0;
	}
	s111=s1[2];
	s222=s2[2];
	if((s111>="A"&&s111<="C")&&(s222>="A"&&s222<="C"))
	{
		cout<<1;
	}
	else if((s111=="D"||s111=="F")&&(s222=="D"||s222=="F"))
	{
		cout<<11;
		return 0;
	}
	else
	{
		cout<<0<<0;
		return 0;
	}
	if((s111=="A"&s222=="B")||(s222=="A"&s111=="B"))
	{
		cout<<1;
	}
	else if((s111=="C"&s222=="B")||(s222=="C"&s111=="B"))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
