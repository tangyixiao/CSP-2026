#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,a,m,b;
	cin>>n>>a>>m>>b;
	if(n!=m)
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	else
	{
		cout<<1;
		if(a[1]==b[1])
		{
			cout<<1;
		}
		else
		{
			cout<<0<<0<<0;
			return 0;
		}
		if(a[2]<='C'&&b[2]<='C')
		{		
			cout<<1;
		}
		else if(a[2]>'C'&&b[2]>'C')
		{
			cout<<1;
		}
		else if(a[2]<='C'&&b[2]>'C')
		{		
			cout<<0<<0;
			return 0;
		}
		else if(a[2]>'C'&&b[2]<='C')
		{
			cout<<0<<0;
			return 0;
		}
		if(a[2]+1==b[2]||a[2]-1==b[2])
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	return 0;
}

