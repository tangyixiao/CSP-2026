#include<bits/stdc++.h>
using namespace std;
int cx[19][6];
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,r1,x,x1;
	string sc="0000";
	cin>>r>>r1>>x>>x1;
	if (r==x)
		sc[0]='1';
	else
	{	
		cout<<sc;
		return 0;
	}
	if ((r1[0]==x1[0])&&(r1[1]==x1[1]))
		sc[1]='1';
	else
	{
		cout<<sc;
		return 0;
	}
	if (r1[2]>='A'&&x1[2]>='A'&&r1[2]<='C'&&x1[2]<='C')
		sc[2]='1';
	else if((r1[2]>='D'&&x1[2]>='D'&&r1[2]<='F'&&x1[2]<='F'))
		sc[2]='1';
	else	
	{
		cout<<sc;
		return 0;
	}
	if (abs(r1[2]-x1[2])==1)
	{
		sc[3]='1';
		cout<<sc;
		return 0;
	}
	else
	{
		cout<<sc;
		return 0;
	}
}
	
