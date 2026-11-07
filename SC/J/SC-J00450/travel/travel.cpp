#include <bits/stdc++.h>
using namespace std;
char a[15];
int main()
{
	
	freopen("travel.in ","r",stdin);
	freopen("travel.out","w",stdout);
	char a[15];
	
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	if(a[1]==a[6]&&a[2]==a[7])
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	if(a[3]==a[8]&&a[4]==a[9])
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	if((a[5]=='C'&&a[10]=='D') ||(a[5]=='D'&&a[10]=='C'))
	{
		cout<<"00";
		return 0;
	}
	if((a[5]=='F'&&a[10]=='D') ||(a[5]=='D'&&a[10]=='F')) 
	{
		cout<<"11";
		return 0;
	}
	if('A'<=a[5]<='C'&& 'A'<=a[10]<='C')
	{
		cout<<"1";
		if(a[5]=='A' &&a[10]=='B' || a[5]=='B'&&a[10]=='C')
		{
			cout<<"1";
			return 0;
		}
		else
		{
			cout<<"0";
			return 0;
		}
	}
	
} 
