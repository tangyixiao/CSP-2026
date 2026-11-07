#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gay,la;
string a,b,x,y,aa,bb;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
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
		aa+=x[i];
	}
	for(int i=0;i<2;i++)
	{
		bb+=y[i];
	}
	if(aa==bb)
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if(x[2]=='A'||x[2]=='B'||x[2]=='C')
	{
		gay++;
	}
	else
	{
		la++;
	}
	if(y[2]=='A'||y[2]=='B'||y[2]=='C')
	{
		gay++;
	}
	else
	{
		la++;
	}
	if(gay==2||la==2)
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	gay=0;
	la=0;
	gay=x[2]-'A';
	la=y[2]-'A';
	if(abs(gay-la)==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
