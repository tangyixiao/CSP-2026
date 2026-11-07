#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,c,d,e,f;
string as,bs;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>as>>b>>bs;
	if(a != b)
	{
		cout<<"0000"<<endl;
		return 0;
	}
	c += (as[0] - '0') * 10;
	c += (as[1] - '0');
	d += (bs[0] - '0') * 10;
	d += (bs[1] - '0');
	if(c != d)
	{
		cout<<"1000"<<endl;
		return 0;
	}
	e = (as[2] - 'A');
	f = (bs[2] - 'A');
	if((e <= 2 && f >= 3) || (f <= 2 && e >= 3))
	{
		cout<<"1100"<<endl;
		return 0;
	}
	if((e == 0 && f == 2) || (f == 0 && e == 2))
	{
		cout<<"1110"<<endl;
	}
	else
	{
		cout<<"1111"<<endl;
	}
	return 0;
 } 
