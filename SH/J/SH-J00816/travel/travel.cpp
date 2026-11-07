#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	int g1=(s1[0]-'0')*10;
	int h1=s1[1]-'0';
	int g2=(s2[0]-'0')*10;
	int h2=s2[1]-'0';
	int y1=g1+h1;
	int y2=g2+h2;
	if (y1!=y2)
	{
		cout<<"000";
		return 0;
	}
	cout<<"1";
	int i1=1,i2=1;
	if (s1[2]=='A'||s1[2]=='B'||s1[2]=='C')
	{
		i1=1;
	}
	else
	{
		i1=2;
	}
	if (s2[2]=='A'||s2[2]=='B'||s2[2]=='C')
	{
		i2=1;
	}
	else
	{
		i2=2;
	}
	if (i1!=i2)
	{
		cout<<"00";
		return 0;
	}
	cout<<"1";
	char r1=s1[2];
	char r2=s2[2];
	if (r1=='C'&&r2=='D')
	{
		cout<<"0";
		return 0;
	}
	if (r2=='C'&&r1=='D')
	{
		cout<<"0";
		return 0;
	}
	if (r1-r2==1||r2-r1==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
