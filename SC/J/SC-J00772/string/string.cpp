#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
string a,c;
long long ans;
int n;
long long b[N];
long long z,d=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i]; 
		cin>>a[i];
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]!=a[i-1])
		{
			break;
		}
		if(i==n)
		{
			cout<<0;
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=b[i];j++)
		{
			c=c+a[i];
		} 
	}
	if(c.size()%2==0)
	{
		for(int i=0;i<=c.size()/2-1;i++)
		{
			if(c[i]!=c[i+c.size()/2])
			{
				d++;
			}
		}
	}
	else
	{
		z=c.size()/2;
		for(int i=0;i<z;i++)
		{
			if(c[i]!=c[i+z+1])
			{
				d++;
			} 
		}
	}
	cout<<d;
	return 0;
}