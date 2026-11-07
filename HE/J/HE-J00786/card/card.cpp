#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[500005];
int n,m;
int c[500005]={0};
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<500005;j++)
		{
			c[i]=0;
		}
		for(int j=i;j<=n;j++)
		{
			c[j]=a[j];
			for(int k=i;k<j;k++)
			{
				if(c[k]==a[j])
				{
					for(int s=k;s<j;s++)
					{
						c[s]=0;
					}
				}
			}
		}
		for(int j=i;j<=n;j++)
		{
			if(c[j]==0)
			{
				continue;
			}
			ans[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
