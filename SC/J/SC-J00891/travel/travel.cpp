#include<bits/stdc++.h> 
using namespace std;
int a,b;
char n[5],m[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;
	for(int i=1;i<=3;i++)
	{
		cin>>n[i];
	}
	cin>>b;
	for(int i=1;i<=3;i++)
	{
		cin>>m[i];
	}
	if(a==b)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if(a==b&&n[1]==m[1]&&n[2]==m[2])
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if(a==b&&n[1]==m[1]&&n[2]==m[2]&&('A'<=n[3]&&n[3]<='C'&&'A'<=m[3]&&m[3]<='C'||n[3]=='F'&&m[3]=='D'||m[3]=='F'&&n[3]=='D'))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if(a==b&&n[1]==m[1]&&n[2]==m[2]&&(n[3]=='A'&&m[3]=='B'||n[3]=='B'&&m[3]=='A'||n[3]=='B'&&m[3]=='C'||n[3]=='C'&&m[3]=='B'||n[3]=='F'&&m[3]=='D'||m[3]=='F'&&n[3]=='D'))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
}