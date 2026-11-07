#include<bits/stdc++.h>
using namespace std;
string ac,as,bc,bs;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ac>>as>>bc>>bs;
	if(ac==bc)
	{
		cout<<"1";
		if(as[0]==bs[0]&&as[1]==bs[1])
		{
			cout<<"1";
			if(as[2]<='C'&&bs[2]<='C')
			{
				cout<<"1";
				char a=as[2]+1;
				char b=as[2]+1;
				if(a==bs[2]||b==as[2])
				{
					cout<<1;
				}
				else
				{
					cout<<"0";
				}
			}
			else if(as[2]>='D'&&bs[2]>='D')
			{
				cout<<"1";
				char a=as[2]+1;
				char b=as[2]+1;
				if(a==bs[2]||b==as[2])
				{
					cout<<1;
				}
				else
				{
					cout<<"0";
				}
			}
			else
			{
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else 
	{
		cout<<"0000";
	}
	return 0;
}
