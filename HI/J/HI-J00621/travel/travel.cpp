#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	bool x1=1,x2=1,x3=1;
	cin>>c1>>s1>>c2>>s2;
	int a1=s1[0]-'0'*10+s1[1]-'0';
	int a2=s2[0]-'0'*10+s2[1]-'0';
	char v1=s1[2],v2=s2[2]; 
	//问题1 
	if(c1==c2)cout<<1;
	else 
	{
		x1=0;
		cout<<0;
	}
	//问题2 
	if(x1&&a1==a2)
	{
		cout<<1;
	}
	else 
	{
		x2=0;
		cout<<0;
	}
	//问题3 
	int xvr,xvt;
	if(v1=='A'||v1=='B'||v1=='C') xvr=1;
	else  xvr=2;
	if(v2=='A'||v2=='B'||v2=='C')xvt=1;
	else  xvt=2;
	if(x1&&x2&&xvr==xvt)
	{
		cout<<1;
	}
	else 
	{
		x3=0;
		cout<<0;
	}
	//问题4 
	int xva=abs(v1-v2);
	if(x1&&x2&&x3&&xva==1)cout<<1;
	else 
	{
		cout<<0;
	}
	return 0;
}
