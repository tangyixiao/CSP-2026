#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],b1[500005],c[500005],t;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j>=n;j++)
		{
			if(b1[a[j]])
			{
				for(int k=b1[a[j]]+1;k<=t;k++)
				{
					b1[a[k]]=0;
					c[k]=0;
				}
				t=b1[a[j]];
			}
			else
			{
				c[++t]=a[j];
				b1[a[j]]=t;
			}
		}
		for(int j=1;j<=t;j++)
		{
			if(c[j]<=m)
			{
				b[c[j]]++;
			}
			c[j]=0;
			b1[a[j]]=0;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
