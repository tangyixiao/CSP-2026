#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in",r);
	freopen("travel.out",w);
	char c1[10],s1[10],c2[10],s2[10];
	bool a=false,b=false,c=false,d=false;
	for(int i=0;i<=1;i++)
	{
		cin>>c1[i];
	}
	for(int i=0;i<=2;i++)
	{
		cin>>s1[i];
	}
	for(int i=0;i<=1;i++)
	{
		cin>>c2[i];
	}
	for(int i=0;i<=2;i++)
	{
		cin>>s2[i];
	}
	if(c1[0]==c2[0]&&c1[1]==c2[1])
	{
		a=true;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])
	{
		b=true;
	}
	if((s1[2]>='D'&&s2[2]>='D')||(s1[2]<'D'&&s2[2]<'D'))
	{
		c=true;
	}
	if((s1[2]>='D'&&s2[2]>='D')||(s1[2]==s2[2]+1&&s1[2]<'D')||(s2[2]==s1[2]+1&&s2[2]<'D'))
	{
		d=true;
	}
	if(a)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(c)
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(d)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
} 
