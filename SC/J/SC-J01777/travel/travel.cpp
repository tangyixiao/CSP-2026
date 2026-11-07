#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int check(char c)
{
	return c<='C';
}
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	string liner=b.substr(0,2),linex=d.substr(0,2);
	char seatr=b[2],seatx=d[2];
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	if(liner!=linex)
	{
		cout<<"1000";
		return 0;
	}
	if(check(seatr)!=check(seatx)) 
	{
		cout<<"1100";
		return 0;
	}
	if(check(seatr)==0) cout<<"1111";
	else 
	{
		if(seatr>seatx) swap(seatr,seatx);
		if(seatx-seatr==1) cout<<"1111";
		else cout<<"1110";
	}
	return 0;
}
/*
exp:100pts
writer:1419936
*/