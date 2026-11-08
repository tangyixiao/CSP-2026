#include<bits/stdc++.h>
using namespace std;

int k[500005];
int ans[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>k[i];
	}
	for(int i=1;i<=n;i++)
	{
		int a[300005];
		for(int j=0;j<300005;j++)
		{
			a[j]=0;
		}
		for(int j=i;j<=n;j++)
		{
			if(a[k[j]]!=0)
			{
				for(int l=a[k[j]];l<j;l++)
				{
					a[k[l]]=0;
				}
			}
			a[k[j]]=j;
		}
		for(int j=i;j<=n;j++)
		{
			if(a[k[j]]!=0)
			{
				ans[k[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
