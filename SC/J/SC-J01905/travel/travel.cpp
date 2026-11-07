#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
bool check(string x,string y)
{
	for(int i=0;i<x.size();i++)
		if(x[i]!=y[i])
			return 0;
	return 1;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c>>s>>cc>>ss;
	if(check(c,cc))
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(s[1]==ss[1]&&s[0]==ss[0])
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if((s[2]<='C'&&ss[2]<='C')||(s[2]>='D'&&ss[2]>='D'))
	{
		cout<<1;
	}
	else
	{
		cout<<"00";
		return 0;
	}
	int a=s[2]-'A';
	int b=ss[2]-'A';
	if(abs(a-b)<=1)
	{
		cout<<1;
	}
	else
		cout<<0;
	return 0;
}