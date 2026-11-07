#include<bits/stdc++.h>
using namespace std;
int main()
{	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	bool flag=true;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";	
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++)
	{
		if(s1[i]!=s2[i])
		{	
			flag=false;
			cout<<"000";
			return 0;
		}
	}
	if(flag && ((s1[2]<='C'&& s2[2]<='C') || (s1[2]>'C'&& s2[2]>'C')))
	{
		cout<<"11";
	}
	else if(flag)
	{
		cout<<"100";
		return 0;
	}
	if(((s1[2]-s2[2]==1)|| (s2[2]-s1[2]==1)) || ((s1[2]=='D' || s2[2]=='F') || (s1[2]=='F' || s2[2]=='D')))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}