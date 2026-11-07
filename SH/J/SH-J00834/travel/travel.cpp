#include<bits/stdc++.h>
using namespace std;
int a,b;
bool x = false,y = false,z = false;
int main()
{
	char c[10],d[10];
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a == b)
	{
		cout<<1;
		x = true;
	}
	else
	{
		cout<<0;
	}
	if(c[0] == d[0] && c[1] == d[1] && x == true)
	{
		cout<<1;
		y = true;
	}
	else
	{
		cout<<0;
	}
	if((c[2] == 68 || c[2] == 69) && (d[2] == 68 || d[2] == 69) && y == true)
	{
		cout<<1;
		z = true;
	}
	else if((c[2] == 65 || c[2] == 66 || c[2] == 67) && (d[2] == 65 || d[2] == 66 || d[2] == 67)  && y == true)
	{
		cout<<1;
		z = true;
	}
	else
	{
		cout<<0;
	}
	if((c[2] - d[2] >= -1) && (c[2] - d[2] <= 1))
	{
		if(z)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	else
	{
		cout<<0;
	}
	return 0;
}
