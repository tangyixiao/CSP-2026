#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>s1>>s2;
	bool f=1;
	if(c1[0]==s1[0] && c1[1]==s1[1])
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		f=0;
	}
	int a=c2[0]*10+c2[1];
	int b=s2[0]*10+s2[1];
	bool f1=1;
	if(f && a==b)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		f1=0;
	}
	bool f2=1;
	if(f && f1 && ((c2[2]>'C' && s2[2]>'C') || (c2[2]<'D' && s2[2]<'D')))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		f2=0;
	}
	if(f && f1 && f2 && (abs(int(c2[2]-s2[2]))==1))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}
