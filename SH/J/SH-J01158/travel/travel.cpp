#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	int a;
	a=c[0]-'0';
	a=a*10+(c[1]-'0');
	int b;
	b=cc[0]-'0';
	b=b*10+(cc[1]-'0');
	if(a==b&&a<=17&&b<=17&&a>=1&&b>=1&&a!=1&&b!=1&&a!=16&&b!=16)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	
	a=s[0]-'0';
	a=a*10+(s[1]-'0');
	b=ss[0]-'0';
	b=b*10+(ss[1]-'0');
	if(a==b&&a>=1&&a<=18)
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	a=s[2]-'A';
	b=ss[2]-'A';
	if(a>=0&&a<=2&&b>=0&&b<=2&&a!=b||a>=3&&a<=4&&b>=3&&b<=4&&a!=b)
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if(a>b&&a-b==1||a<b&&b-a==1)
	{
		cout<<1;
	}
	else
	{
		cout<<"0";
		return 0;
	}
	return 0;
} 
