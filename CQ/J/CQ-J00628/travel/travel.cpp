#include<bits/stdc++.h>
using namespace std;
char z[2],e[3],x[2],r[3];
char num[4];
int main()
{
//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
num[0]='0';
num[1]='0';
num[2]='0';
num[3]='0';
for(int i=0;i<5;i++)
{
	if(i<=1)
	{
		cin>>z[i];
	}
	else
	{
		cin>>e[i-2];
	}
	
}
for(int i=0;i<5;i++)
{
	if(i<=1)
	{
		cin>>x[i];
	}
	else
	{
		cin>>r[i-2];
	}
	
}
if(z[0]==x[0]&&z[1]==x[1])
{
	num[0]='1'; 
}
else 
{
	cout<<num[0]<<num[1]<<num[2]<<num[3];
	return 0;
}
if(e[0]==r[0]&&e[1]==r[1])
{
	num[1]='1';
}
else 
{
	cout<<num[0]<<num[1]<<num[2]<<num[3];
	return 0;
}
if(e[2]=='A'||e[2]=='B'||e[2]=='C')
{
	if(r[2]=='A'||r[2]=='B'||r[2]=='C')
	{
		num[2]='1';
	}
	else num[2]='0';
}
else if(e[2]=='D'||e[2]=='F')
{
	if(r[2]=='D'||r[2]=='F')
	{
		num[2]='1';
		num[3]='1';
		cout<<num[0]<<num[1]<<num[2]<<num[3];
	return 0;
	}
}
if(e[2]-r[2]==1||r[2]-e[2]==1)
{
	num[3]='1';
}
	cout<<num[0]<<num[1]<<num[2]<<num[3];
	return 0;

}

