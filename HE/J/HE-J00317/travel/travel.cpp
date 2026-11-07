#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string s11,s22;
string st1,st2;
string cnt1,cnt2;
int st10,st20;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<s1.size()-1;i++)
	{
		s11+=s1[i];
	}
	for(int i=0;i<s2.size()-1;i++)
	{
		s22+=s2[i];
	}
	st1=s1[2];
	st2=s2[2];
	if(st1=="A"||st1=="B"||st1=="C")
	{
		cnt1='x';
	}
	else if(st1=="D"||st1=="F")
	{
		cnt1='y';
	}
	if(st2=="A"||st2=="B"||st2=="C")
	{
		cnt2='x';
	}
	else if(st2=="D"||st2=="F")
	{
		cnt2='y';
	}
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s11==s22)
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(cnt1==cnt2)
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(st1=="A"&&st2=="B")
	{
		cout<<1;
	}
	else if(st2=="A"&&st1=="B")
	{
		cout<<1;
	}
	else if(st1=="B"&&st2=="C")
	{
		cout<<1;
	}
	else if(st2=="B"&&st1=="C")
	{
		cout<<1;
	}
	else if(st1=="F"&&st2=="D")
	{
		cout<<1;
	}
	else if(st2=="F"&&st1=="D")
	{
		cout<<1;
	}
	else
	{
		cout<<"0";
	}
	return 0;
} 

