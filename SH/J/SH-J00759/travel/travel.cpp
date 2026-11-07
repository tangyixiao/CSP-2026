#include <bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	int a,b;
	string m,n;
	cin>>a>>m>>b>>n;
	if(a==b)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(m[0]==n[0]&&m[1]==n[1])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(m[2]>='D'&&n[2]>='D')
	{
		cout<<11;
		return 0;
	}
	if(m[2]<='C'&&n[2]<='C')
	{
		if(abs(m[2]-n[2])==1)
		{
			cout<<11;
		}
		else
		{
			cout<<10;
		}
	}
	else
	{
		cout<<"00";
	}
}
