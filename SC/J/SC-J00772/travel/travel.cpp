#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool f=false;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	if(a==c)
	{
		cout<<1;
	}
	else
	{
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0;i<=1;i++)
	{
		if(b[i]!=d[i])
		{
			cout<<0;
			break;
		}
		if(i==1)
		{
			cout<<1;
			f=true;
		}
	}
	if(f==false)
	{
		cout<<0<<0;
		return 0;
	}
	if(((b[2]>='A'&&b[2]<='C')&&(d[2]>='A'&&d[2]<='C'))||(b[2]>'C'&&d[2]>'C'))
	{
		cout<<1;
		if(b[2]-1==d[2]||d[2]-1==b[2])
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	else
	{
		cout<<0<<0; 
	}
	return 0;
}