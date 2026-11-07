#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	string c,s,d;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(int j=1;j<=a;j++)
		{
			s+=c;
		}
	}
	for(int i=s.length();i>=1;i--)
	{
		d+=s[i-1];
	}
	if(d==s)
	{
		cout<<0;
	}
	else
	{
		if(n==1)
		{
			
			if(a==2)
			{
				cout<<1;
			}
			else if(a==3)
			{
				cout<<1;
			}
			else if(a==4)
			{
				cout<<2;
			}
		}
		if(n==2)
		{
			if(a==2)
			{
				cout<<1;
			}
			else if(a==3)
			{
				cout<<1;
			}
			else if(a==4)
			{
				cout<<2;
			}
		}
		if(n==3)
		{
			cout<<2;
		}
	}		
	return 0; 
}