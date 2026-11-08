#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int xa=0,pa=0,la=0,xb=0,pb=0,lb=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]=='1') xa+=10;
	xa=xa+c1[1]-'0';
	if(c2[0]=='1') xb+=10;
	xb=xb+c2[1]-'0';
	if(xa==xb) cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s1[0]=='1') pa+=10;
	pa=pa+s1[1]-'0';
	if(s2[0]=='1') pb+=10;
	pb=pb+s2[1]-'0';
	if(pa==pb) cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	bool va,vb;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') va=0;
	else va=1;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') vb=0;
	else vb=1;
	if(va==vb) cout<<"1";
	else
	{
		cout<<"00";
		return 0;	
	}
	if(s1[2]+1==s2[2]||s1[2]-1==s2[2]) cout<<"1";
	else cout<<"0";
	return 0;
}
