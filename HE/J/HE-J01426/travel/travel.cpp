#include<bits/stdc++.h>
using namespace std;
string s;
int a[10]={0};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	getline(cin,s);
	a[1]=0,a[2]=1;
	if(s[0]==s[7]&&s[1]==s[8])
	{
		a[3]=-1;
		cout<<a[2];
	}
	else
	{
		cout<<a[1];
	}
	if(a[3]==-1&&(s[0]==s[7]&&s[1]==s[8]))
	{
		a[4]=-1;
		cout<<a[2];
	}
	else
	{
		cout<<a[1];
	}
	if(a[4]==-1&&((s[5]>='A'&&s[5]<='C')&&(s[12]>='A'&&s[12]<='C')))
	{
		a[5]=-1;
		cout<<a[2];
	}
	else if(a[4]==-1&&((s[5]=='D'&&s[12]=='F')||(s[5]=='F'&&s[12]=='D')))
	{
		a[6]=-1;
		cout<<a[2];
	}
	else
	{
		cout<<a[1];
	}
	if(a[5]=-1&&(abs(s[5]-s[12])==1))
	{
		cout<<a[2];
	}
	else if(a[6]==-1)
	{
		cout<<a[2];
	}
	else
	{
		cout<<a[1];
	}
	return 0;
}
