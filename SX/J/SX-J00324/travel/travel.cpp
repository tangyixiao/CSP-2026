#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int e=0,f=0,g=0,h=0;
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=0;i<=3;i++)
	{
	 cin>>a;
	}
	for(int i=0;i<=3;i++)
	{
	 cin>>b;
	}
for(int i=0;i<=3;i++)
	{
	 cin>>c;
	}
for(int i=0;i<=3;i++)
	{
	 cin>>d;
	}
if(a==c)
{
	e+=1;
}
else if(a!=c)
	{


		e=0;

	}
if(b[0]==d[0]&&b[1]==d[1]&&a==c)
{
	f=1;
}
else
{
	f=0;
}
if(b[0]==d[0]&&b[1]==d[1]&&a==c &&b[2]=='A'&&d[2]=='B'||b[2]=='A'&&d[2]=='C'||b[2]=='B'&&d[2]=='A'||b[2]=='B'&&d[2]=='C'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='A'||b[2]=='C'&&d[2]=='B'||b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D')
{
	g=1;
}
else
{
	g=0;
}
if(b[2]=='A'&&d[2]=='B'||b[2]=='B'&&d[2]=='A'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='B'||b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D')
{
	h=1;
}
else
{
	h=0;
}

	cout<<e<<f<<g<<h;
	return 0;
}