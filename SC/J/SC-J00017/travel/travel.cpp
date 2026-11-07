#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	char a=a2[2],b=b2[2];
	for(int i=0;i<=1;i++)
	{
		if(a1[i]!=b1[i])
		{
			cout<<"0000";
			return 0;
		}
	}
	cout<<'1';
	for(int i=0;i<=1;i++)
	{
		if(a2[i]!=b2[i])
		{
			cout<<"000";
			return 0;
		}
	}
	cout<<'1';
	if(a>='D'&&b>='D')
	{
		cout<<'1';
	}
	else if(a!='D'&&b!='D'&&a!='F'&&b!='F')
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(a=='A'&&b=='C')
	{
		cout<<'0';
	}
	else if(b=='A'&&a=='C')
	{
		cout<<'0';
	}
	else
	{
		cout<<'1';
	}
	return 0;
 } 