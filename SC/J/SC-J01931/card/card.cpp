#include<bits/stdc++.h>
using namespace std;
long long a[10000000],b[100000],c[100000],a1[1000000];
long long n,m,x;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[x];
		a1[x]=a[x];
		x++;
		for(int j=0;j<x;j++)
		{
			if(a[x-1]==a[j])
			{
				for(int k=j+1;k<=x-1;k++)
				{
					a[k]=0;
				}
				x=j+1;
			}
		}
		for(int l=0;l<=x;l++)
		{
			b[a[l]]++;
		}
		for(int l=1;l<=m;l++)
		{
			if(b[l]>0)
			{
				c[l]++;
			}
			b[l]=0;
		}
	}
	for(int g=1;g<n;g++)
	{
		long long x1=g;
		for(int i=g;i<n;i++)
		{
			x1++;
			for(int j=g;j<x1-1;j++)
			{
				if(a1[x1-1]==a1[j])
				{
					for(int k=j+1;k<=x1-1;k++)
					{
						a1[k]=0;
					}
					x=j+1;
				}
			}
			for(int l=g;l<=x1;l++)
			{
				b[a1[l]]++;
			}
			for(int l=1;l<=m;l++)
			{
				if(b[l]>0)
				{
					c[l]++;
				}
				b[l]=0;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<c[i]<<' ';
	}
}