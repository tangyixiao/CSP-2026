#include<bits/stdc++.h>
using namespace std;
string rx,rz,xx,xz;
int main()
{
	freopen("travel","r",stdin);
	freopen("travel","w",stdout);
	cin>>rx>>rz>>xx>>xz;
	if(rx==xx)	cout<<"1";
	else
	{
		cout<<"0"<<"0"<<"0"<<"0";
		return 0;
	}
	if(rz[0]+rz[1]==xz[0]+xz[1])	cout<<"1";
	else
	{
		cout<<"0"<<"0"<<"0";
		return 0;
	}
	if((rz[2]=='A'||rz[2]=='B'||rz[2]=='C'&&xz[2]=='A'||xz[2]=='B'||xz[2]=='C')||(rz[2]=='D'||rz[2]=='F'&&xz[2]=='D'||xz[2]=='F'))	cout<<"1";
	else
	{
		cout<<"0"<<"0";
		return 0;
	}
	if((rz[2]=='A'&&xz[2]=='B')||(rz[2]=='B'&&xz[2]=='C')||(rz[2]=='D'&&xz[2]=='F')||(xz[2]=='A'&&rz[2]=='B')||(xz[2]=='B'&&rz[2]=='C')||(xz[2]=='D'&&rz[2]=='F'))	cout<<"1";
	else	cout<<"0";
	return 0;
}
