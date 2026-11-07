#include <bits/stdc++.h> 
using namespace std;

int a,b,c,d,e,m,n,x,y,z;
int main()
{
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
	cin>>a>>b>>c>>d>>e>>m>>n>>x>>y>>z;
	cout<<1; 
	if(c==x&&d==y)
	{
		cout<<1;
	}
	if(((e='A')&&(z='C'))||((e='A')&&(z='B'))||((e='B')&&(z='C'))||((e='A')&&(z='C'))||((e='C')&&(z='B'))||((e='B')&&(z='A'))||((e='D')&&(z='E'))||((e='E')&&(z='D')))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	if(((e='A')&&(z='B'))||((e='B')&&(z='C'))||((e='C')&&(z='B'))||((e='B')&&(z='A'))||((e='D')&&(z='E'))||((e='E')&&(z='D')))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
	return 0;
}
