#include<bits/stdc++.h>
using namespace std;
long long rc,xc;
string ans;
string rz,xz;
bool flag1=0,flag2=0,flag3=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rz>>xc>>xz;
	if(rc==xc)
	{
		ans=ans+"1";
		flag1=1;
	}
	else ans+="0";
	if(flag1==1&&rz[0]==xz[0]&&rz[1]==xz[1])
	{
		ans=ans+"1";
		flag2=1;
	}
	else ans=ans+"0";
	if(flag1==1&&flag2==1&&rz[2]>='A'&&rz[2]<='C'&&xz[2]>='A'&&xz[2]<='C'||flag1==1&&flag2==1&&rz[2]>='D'&&rz[2]<='F'&&xz[2]>='D'&&xz[2]<='F')
	{
		ans=ans+"1";
		flag3=1;
	}
	else ans=ans+"0";
	if(flag1==1&&flag2==1&&flag3==1&&rz[2]+1==xz[2]||flag1==1&&flag2==1&&flag3==1&&rz[2]-1==xz[2])
	{
		ans=ans+"1";
	}
	else ans=ans+"0";
	cout<<ans;
	return 0;
}
