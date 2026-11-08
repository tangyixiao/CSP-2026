#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,a1,b1;
	string c,d;
	char k,x;
	bool flag=true;
	cin>>a>>c>>b>>d;
	if(a==b)
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
		if(c[i]==d[i])
		{
			flag=true;
		}
		else
		{
			flag=false;
		}
	}
	if(flag)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(c[2]=='B'||c[2]=='C'||c[2]=='A')
	{
		a1=1;
	}
	else
	{
		a1=0;
	}
	if(d[2]=='B'||d[2]=='C'||d[2]=='A')
	{
		b1=1;
	}
	else
	{
		b1=0;
	}
	if(b1==a1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	k=c[2]-'A';
	x=d[2]-'A';
	if(k+1==x||x+1==k)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
