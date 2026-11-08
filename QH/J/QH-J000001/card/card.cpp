#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],ans[200010],p[500010];
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
		for(int j=i;j<=n;j++)
		{
			for(int o=j-1;o>=1;o--)
			{
				if(p[o]==a[j])
				{
					for(int u=o;u<j;u++)
					{
						p[u]=0;
					}
				}
			}
			p[j]=a[j];
		}
		for(int j=i;j<=n;j++)
		{
			ans[p[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	cout<<ans[i]<<" ";
	return 0;
}
