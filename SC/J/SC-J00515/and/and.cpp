#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const int N=2e5+5;
int n,m,mi=0x3f3f3f3f;
int a[N];
bool v=1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=(i-1))
		{
			v=0;
		}
		mi=min(mi,a[i]);
	}
	if(m==2)
	{
		int e=-1;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				e=max(e,a[i]&a[j]);
			}
		}
		cout<<e;
		return 0;
	}
	else if(v==1)
	{
		if(a[n]%2==0)
		{
			int b=a[n-1]&a[n-2];
			cout<<b;
			return 0;
		}
		else
		{
			int b=a[n]&a[n-1];
			cout<<n;
			return 0;
		}
	}
	else if(n==m)
	{
		int h=a[1];
		for(int i=2;i<=n;i++)
		{
			h=a[i]&h;
		}
		cout<<h;
		return 0;
	}
	else if(m==1)
	{
		int o=-1;
		for(int i=1;i<=n;i++)
		{
			o=max(o,a[i]);
		}
		cout<<o;
		return 0;
	}
	else if((m+1)==n)
	{
		int w=a[1];
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=mi)
			{
				w=w&a[i];
			}
			else
			{
				continue;
			}
		}
		cout<<w;
		return 0;
	}
	else
	{
		int x=0x3f3f3f3f;
		for(int i=1;i<=n;i++)
		{
			x=min(x,a[i]);
		}
		cout<<x;
		return 0;
	}
	return 0;
}