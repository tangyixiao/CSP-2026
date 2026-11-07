#include<bits/stdc++.h>
using namespace std;
int a,b;
string c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a==b)
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	int e,f;
	e=10*(c[0]-'0')+c[1]-'0';
	f=10*(d[0]-'0')+d[1]-'0';
	if(e==f)
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0<<0;
		return 0;
	}
	char g,h;
	g=c[2];
	h=d[2];
	if(((g=='A'||g=='B'||g=='C')&&(h=='A'||h=='B'||h=='C'))||((g=='D'||g=='F')&&(h=='D'||h=='F')))
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0;
		return 0;
	}
	if((g=='A'&&h=='B')||(g=='B'&&h=='A')||(g=='B'&&h=='C')||(g=='C'&&h=='B')||(h=='D'&&g=='F')||(h=='F'&&g=='D'))
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		return 0;
	}
	return 0;
	//fropen("travl.in","w",stdout)
	//freopen("travel.out","r",stdut); 
}
