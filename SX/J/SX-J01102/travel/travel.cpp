#include <bits/stdc++.h>
using namespace std;
int a,c,ant=0;
int b[3],d[3];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdin);
	cin>>a>>b[3]>>c>>d[3];
	if(a==c)
	{
		cout<<0;
	}
	else if(a!=c)
	{
		cout<<1;
	}
	if(b[1]==d[1])
	{
		cout<<1;
	}
	else if(b[1]!=d[1])
	{
		cout<<0;
	}
	for(int i=0;i<=1;i++)
	{
		if(b[i]=='A'||d[i]=='B')
		{
			ant++;
		}
		if(b[i]=='B'||d[i]=='C')
		{
			ant++;
		}
		if(b[i]=='A'||d[i]=='C')
		{
			ant++;
		}
		if(ant>=1)
		{
			cout<<0;
		}
		else{
			cout<<1;
		}
	}
	return 0;
}






