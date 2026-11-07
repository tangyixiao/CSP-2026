#include<bits/stdc++.h>
using namespace std;
string cl,sl,ci,si;
int a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>cl>>sl>>ci>>si;
	if(cl==ci) a=1;
	cout<<a;
	if(a==0)
	{
		cout<<0<<0<<0;
		return 0;
	}
	if(sl[0]==si[0]&&sl[1]==si[1]) b=1;
	cout<<b;
	if(b==0)
	{
		cout<<0<<0;
		return 0;
	}
	if((sl[2]=='A'||sl[2]=='B'||sl[2]=='C')&&(si[2]=='A'||si[2]=='B'||si[2]=='C')||(sl[2]=='D'||sl[2]=='F')&&(si[2]=='D'||si[2]=='F')) c=1;
	cout<<c;
	if(c==0)
	{
		cout<<0;
		return 0;
	}
	if(sl[2]=='B'||si[2]=='B'||sl[2]=='D'||sl[2]=='F')d=1;
	cout<<d;
	return 0;
}

