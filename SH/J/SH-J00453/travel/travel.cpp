#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,a1,a2;
char b1,b2;
bool flag;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{cout<<1;}
	else
	{
		cout<<0;
		flag=1;
	}
	a1=s1[0];a1+=s1[1];
	a2=s2[0];a2+=s2[1];
	if(a1==a2&&flag==0)
	{cout<<1;}
	else
	{
		cout<<0;
		flag=1;
	}
	b1=s1[2];b2=s2[2];
	if(((b1>='D'&&b2>='D')||(b1<='C'&&b2<='C'))&&flag==0)
	{cout<<1;}
	else
	{
		cout<<0;
		flag=1;
	}
	if(abs(b1-b2)==1&&flag==0)
	{cout<<1;}
	else
	{cout<<0;}
	return 0;
}
