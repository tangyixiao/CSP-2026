#include<bits/stdc++.h>
using namespace std;
char b[10],d[10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	int x,y;
	cin>>a;
	for(int i=1;i<=3;i++)
	{
		cin>>b[i];
	}
	cin>>c;
	for(int i=1;i<=3;i++)
	{
		cin>>d[i];
	}
	if(a==c) 
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b[1]==d[1]&&b[2]==d[2])
	{
		cout<<"1";
	} 
	else
	{
		cout<<"000"; 
		return 0;
	}
	x=b[3];
	y=d[3];
	if((((x>=65&&x<=67)&&(y>=65&&y<=67))&&(x!=y))||((x==68&&y==70)||(x==70&&y==68)))
	{
		cout<<"1";
	}
	else
	{
		cout<<"00";
		return 0;
	}
	if((x+1==y||x-1==y)||((x==68&&y==70)||(x==70&&y==68)))
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		return 0;
	}
	return 0;
}