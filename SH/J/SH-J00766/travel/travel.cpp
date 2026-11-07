#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int x1=0,p1=0,c1=0,l1=0,x2=0,p2=0,c2=0,l2=0;
	cin>>a>>b>>c>>d;
	x1=(a[0]-'0')*10+a[1]-'0';
	x2=(c[0]-'0')*10+c[1]-'0';
	p1=(b[0]-'0')*10+b[1]-'0';
	p2=(d[0]-'0')*10+d[1]-'0';
	c1=b[2];
	c2=d[2];
	if(c1<='C')
	{
		l1=1;
	}
	else
	{
		l1=2;
	}
	if(c2<='C')
	{
		l2=1;
	}
	else
	{
		l2=2;
	}
	if(x1!=x2)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		cout<<"1";
	}
	if(p1!=p2)
	{
		cout<<"000";
		return 0;
	}
	else
	{
		cout<<"1";
	}
	if(l1!=l2)
	{
		cout<<"00";
		return 0;
	}
	else
	{
		cout<<"1";
	}
	if(abs(c1-c2)!=1)
	{
		cout<<"0";
		return 0;
	}
	else
	{
		cout<<"1";
	}
	return 0;
}
