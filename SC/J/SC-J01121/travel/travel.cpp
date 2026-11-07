#include<bits/stdc++.h>
using namespace std;
string x,y,xx,yy;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y>>xx>>yy;
	if(x!=xx)
	{
		cout<<"0000";
		return 0;
	}
	if(y[0]!=yy[0]||y[1]!=yy[1])
	{
		cout<<"1000";
		return 0;
	}
	if((y[2]>='A'&&y[2]<='C'&&yy[2]>='A'&&yy[2]<='C')||(y[2]>='D'&&y[2]<='E'&&yy[2]>='D'&&yy[2]<='E'))
	{
		cout<<"111";
		if(y[2]+1==yy[2]||yy[2]+1==y[2])
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
		return 0;
	}
	else
	{
		cout<<"1100";
		return 0;
	}
	return 0;
} 