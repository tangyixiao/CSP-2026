#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdin);
	string x,r,xr,rr;
	int a[5],b[5];
	cin>>x>>xr>>r>>rr;
	
	a[0]=x[0]-'0';
	a[1]=x[1]-'0';
	a[2]=r[0]-'0';
	a[3]=r[1]-'0';
	
	b[0]=xr[0]-'0';
	b[1]=xr[1]-'0';
	b[2]=rr[0]-'0';
	b[3]=rr[1]-'0';
	if(a[0]==a[2]&&a[1]==a[3])
	{
	cout<<1;
		if(b[0]==b[2]&&b[1]==b[3])
		{
			cout<<1;
			if((xr[2]=='A'||xr[2]=='B'||xr[2]=='C')&&(rr[2]=='A'||rr[2]=='C'||rr[2]=='B'))
			{
			cout<<1	;
			 if(xr[2]='A'&&rr[2]=='C')
			 cout<<0;
			 else
			 cout<<1;
			}
			else if((xr[2]=='D'||xr[2]=='E')&&(rr[2]=='D'||rr[2]=='E')) cout<<"11";
			
			else cout<<"00";
		}
		else
		cout<<"000";
	}
	
	else 
	{
		cout<<"0000";
	}
	return 0;
}
