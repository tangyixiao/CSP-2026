#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,b1,a2,b2;
	char c1,c2;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	//cout<<a1<<b1<<c1<<' '<<a2<<b2<<c2;
	int d=0;
	if(a1==a2)
	{
		cout<<1;
	}
	else{
		d=1;
		cout<<"0000";
		return 0;
	}
	
	if(b1==b2)
	{
		cout<<1;
	}
	else{
		cout<<"000";
		d=1;
		return 0;
	}
	if(c1=='A'||c1=='B'||c1=='C')
	{
		if(c2=='A'||c2=='B'||c2=='C')
		{
			cout<<1;
		}
		else
		{
			cout<<"00";
			d=1;
			return 0;
		}
	}
	else{
		if(c1=='D'||c1=='F')
		{
			if(c2=='D'||c2=='F')
			{
				cout<<"11";
				
				return 0;
			}
			else{
				cout<<"00";
				d=1;
				return 0;
			}
		}
	}
	if(d==0)
	{
	if(c2-c1==1||c1-c2==1)
	{
		cout<<1;
	}
	else {
		cout<<0;
	}
	}
	return 0;
}