#include <bits/stdc++.h>
using namespace std;
string rc,xc;
char rz[10],xz[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rz>>xc>>xz;
	if(rc==xc)
	{
		cout<<"1";
	}else	cout<<"0";
	if(rc==xc&&rz[0]==xz[0]&&rz[1]==xz[1])
	{
		cout<<"1";	
	}else 	cout<<"0";
	if(rc==xc&&rz[0]==xz[0]&&rz[1]==xz[1])
	{
		if(rz[2]=='A'||rz[2]=='B'||rz[2]=='C')
		{
			if(xz[2]=='A'||xz[2]=='B'||xz[2]=='C')
			{
				cout<<"1";
			}else cout<<"0";
		}else if(rz[2]=='D'||rz[2]=='F')
		{
			if(xz[2]=='D'||xz[2]=='F')
			{
				cout<<"1";
			}else	cout<<"0";
		}
	}else cout<<"0";
	if(rc==xc&&rz[0]==xz[0]&&rz[1]==xz[1])
	{
		if((int(rz[2])-int(xz[2]))==1||(int(xz[2])-int(rz[2]))==1)
		{
			if(rz[2]=='C'&&xz[2]=='D')
			{
				cout<<"0";
			}else if(rz[2]=='D'&&xz[2]=='C')
			{
				cout<<"0";
			}else	cout<<"1";
		}else if(rz[2]=='D'&&xz[2]=='F')
		{
			cout<<"1";
		}else if(xz[2]=='D'&&rz[2]=='F')
		{
			cout<<"1";
		}else	cout<<"0";
	}else	cout<<"0";
	return 0;
}
