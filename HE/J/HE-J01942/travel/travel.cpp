#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool flag=true; 
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		flag=false;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&flag)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		flag=false;
	}
	if(!((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C'))&&flag)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		flag=false;
	}
	if((s1[2]-s2[2]==1||s1[2]-s2[2]==-1)&&(!(s1[2]+s2[2]==135))&&flag)
	{
		cout<<1;
	}
	else cout<<0;
	return 0;
}
