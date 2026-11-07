#include<bits/stdc++.h>
using namespace std;
int a,b,e[4],f,g;
string c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a==b)
	{
		e[0]=1;
	}
	if(c[0]==d[0]&&c[1]==d[1])
	{
		if(e[0]==1)
		{
			e[1]=1;
		}
	}
	if(c[2]=='A'||c[2]=='B'||c[2]=='C')
	{
		f=1;
	}
	else if(c[2]=='D'||c[2]=='F')
	{
		f=2;
	}
	if(d[2]=='A'||d[2]=='B'||d[2]=='C')
	{
		g=1;
	}
	else if(d[2]=='D'||d[2]=='F')
	{
		g=2;
	}
	if(f==g)
	{
		if(e[1]==1)
		{
			e[2]=1;
		}
	}
 	if(c[2]-d[2]==1||d[2]-c[2]==1)
	{
		if(e[2]==1)
		{
			e[3]=1;
		}
	}
	for(int i=0;i<4;i++)
	{
		cout<<e[i];
	}
	return 0;
}