#include<bits/stdc++.h>
using namespace std;
int x,r;
bool a=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char x1[3],r1[3];
	cin>>x>>x1[0]>>x1[1]>>x1[2];
	cin>>r>>r1[0]>>r1[1]>>r1[2];
	if(r==x)
		cout<<1;
	else
		cout<<0;
	if(r1[1]==x1[1] && r1[0]==x1[0])
		cout<<1;
	else
		cout<<0;
	if(r1[2] <'D' and x1[2] <'D')
	{
			cout<<1;
			a=1;
	}
	
	else if(r1[2]>='D' and x1[2]>='D')
	{
		cout<<1;
		a=1;
	}
	else
		cout<<0;
	if(a)
	{
		if(r1[2]-x1[2]==1)
			cout<<1;
		else if(x1[2]-r1[2]==1)
			cout<<1;
		else
			cout<<0;
	}
	else
	{
		cout<<0; 
	}
	return 0;
}
