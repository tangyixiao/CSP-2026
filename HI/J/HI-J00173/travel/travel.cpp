#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a = 0,c = 0;
	string b,d,s;
	cin>>a>>b>>c>>d;
	if(a == c)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	a = (b[0]-48)*10+b[1]-48;
	c = (d[0]-48)*10+d[1]-48;
	if(a == c)
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if((b[2] != 'C' || d[2] != 'D') && (b[2] != 'D' && d[2] != 'C'))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(b[2]+1 == d[2] || b[2]-1 == d[2])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
