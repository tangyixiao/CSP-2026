#include<bits/stdc++.h>

using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	if(a==b)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	int e=10*(c[0]-'0')+(c[1]-'0'),f=10*(d[0]-'0')+(d[1]-'0');
	if(a==b&&e==f)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(a==b&&e==f&&((c[2]<='C'&&d[2]<='C')||(c[2]>='D'&&d[2]>='D')))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(a==b&&e==f&&((char(c[2]+1)==d[2])||(char(c[2]-1)==d[2]))&&((c[2]<='C'&&d[2]<='C')||(c[2]>='D'&&d[2]>='D')))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
