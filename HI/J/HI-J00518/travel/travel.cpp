#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	int a[4],b[4];
	for(int i=0;i<s1.size();i++)
	{
		a[i]=s1[i];
		b[i]=s2[i];
	} 
	if(a[0]==b[0]&&a[1]==b[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(a[2]!='D'&&a[2]!='F'&&b[2]!='D'&&b[2]!='F')
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(a[2]+1==b[2]||a[2]-1==b[2])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
