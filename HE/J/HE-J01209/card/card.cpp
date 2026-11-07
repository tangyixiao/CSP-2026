#include <bits/stdc++.h>
using namespace std;
long long n,m,a[510000],b[510000],c[510000],d[510000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		
	}
	for(long long h=1;h<=m;h++)
	{
		d[h]=0;
	}
	
	long long u=n;
	long long o=1;
	while(u)
	{
		for(long long i=1;i<=n;i++) 
		{
			c[i]=0;
		}
		for(long long i=1;i<=m;i++)
		{
			b[i]=0;
		}
		for(long long i=o;i<=n;i++) 
		{
			long long y=a[i];
			if(b[y]>0)
			{
				
				for(long long j=b[y];j<i;j++)
				{
					c[j]=1;
					b[a[j]]=0;
				}
				
			}
			b[y]=i;
		}
		for(long long i=o;i<=n;i++) 
	    {
		    if(c[i]==0) 
		    {
		    	d[a[i]]++;
			}
		
		}
		o++;
		u--; 
	}
	for(long long i=1;i<=m;i++)
	{
		cout<<d[i]<<" ";
	}
	return 0;
	
 } 
