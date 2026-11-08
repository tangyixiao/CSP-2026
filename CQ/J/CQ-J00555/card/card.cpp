#include<bits/stdc++.h>
using namespace std;
int n,m,p,a[1000000],c[10000000],b[1000000],d[1000000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>p;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	m=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(c[a[j]]==0)
			{
				c[a[j]]=m;
				m++;
			}
			else 
			{
				m-=1;
				for(int t=c[a[j]];;t++)
				{
					if(c[t]!=0)
					{
						c[t]=0;
						break;
					}
				 } 
				c[a[j]]=m;
			}
		}
		for(int j=1;j<=n;j++)
		{
			if(c[a[j]]!=0&&d[a[j]]==0)
			{
				d[a[j]]=1;
				b[a[j]]++;
			}
		}
		for(int j=1;j<=n;j++)
		{
			d[a[j]]=0;
		}
	}
	for(int i=1;i<=p;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0; 
 } 
