#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	//freopen("travle.in","r",stdin)
	//freopen("travle.out","w",stdout)
	int c1,c2,a,b;
	string s1,s2;
	cin>>c1>>c2>>s1>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(int s1=s2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(char s1==A||s1==B||s1==C)
	{
		a=1;
	}
	else
	{
		a=0;
	}
	if(char s2==A||s2==B||s2==C)
	{
		b=1;
	}
	else
	{
		b=0;
	}
	if(a==b)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(char (s1-1)==s2||(s2-1)=s1)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}