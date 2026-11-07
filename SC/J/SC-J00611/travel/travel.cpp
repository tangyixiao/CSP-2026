#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[5],b[5];
int main()
{
	cin>>n;
	for(int i=1;i<=3;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=3;i++)
	{
		cin>>b[i];
	}
	if(n==m)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if((a[1]-48)*10+(a[2]-48)==(b[1]-48)*10+(b[2]-48))
	{
		cout<<"1";
	}
	else
	{
		cout<<"000";
		return 0;
	}
	int c=0;
	if(a[3]=='A'||a[3]=='B'||a[3]=='C')
	{
		if(b[3]=='A'||b[3]=='B'||b[3]=='C')
		{
			cout<<"1";
			c=1;
		}
	}
	if(a[3]=='D'||a[3]=='F')
	{
		if(b[3]=='D'||b[3]=='F')
		{
			cout<<"1";
			c=1;
		}
	}
	if(c==0)
	{
		cout<<"00";
		return 0;
	}
	if(a[3]=='D'||a[3]=='F')
	{
		cout<<"1";
		return 0;
	}
	if(abs(a[3]-b[3])==1)
	{
		cout<<"1";
		return 0;
	}
	cout<<"0";
	return 0;
} 