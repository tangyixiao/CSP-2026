#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if (c1==c3)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	string x,y;
	x=c2[0]+c2[1];
	y=c4[0]+c4[1];
	if (x==y)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if (c2[2]=='A'||c2[2]=='B'||c2[2]=='C')
	{
		if (c4[2]=='A'||c4[2]=='B'||c4[2]=='C')
		{
			cout<<"1";
		}
		else
		{
			cout<<"00";
			return 0;
		}
	}
	else if (c2[2]=='F'||c2[2]=='D')
	{
		if (c4[2]=='F'||c4[2]=='D')
		{
			cout<<"1";
		}
		else
		{
			cout<<"00";
		}
	}
	if (c2[2]=='A'&&c4[2]=='B' || c2[2]=='B'&&c4[2]=='A' || c2[2]=='B'&&c4[2]=='C' ||c2[2]=='C'&&c4[2]=='B' ||c2[2]=='F'&&c4[2]=='D'||c2[2]=='F'&&c4[2]=='D')
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
} 
