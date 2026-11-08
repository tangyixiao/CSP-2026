#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int rx,xx,rwp,xwp;
	char rwl,xwl;
	cin>>rx>>rwp>>rwl>>xx>>xwp>>xwl;
	if(rx!=xx)
	{
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(rwp!=xwp)
	{
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if(rwl=='D'||rwl=='F')
	{
		if(xwl=='D'||xwl=='F')
		{
			cout<<"11";
			return 0;
		}
		cout<<"00";
		return 0;
	}
	else
	{
		if(xwl=='D'||xwl=='F')
		{
			cout<<"00";
			return 0;
		}
		cout<<"1";
		if((rwl=='A'&&xwl=='B')||rwl=='B'||(rwl=='C'&&xwl=='B'))
		{
			cout<<"1";
			return 0;
		}
		cout<<"0";
	}
	return 0;
} 
