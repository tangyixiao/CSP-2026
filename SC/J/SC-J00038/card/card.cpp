#include <bits/stdc++.h> 
using namespace std;
int a[500005],m,n;
int cnt[300005];
int vis[300005],b[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i = 1;i<=n;i++)
	{
		for(int j = i;j<=n;j++)
		{
			if(vis[a[j]]==0)
			{
				vis[a[j]]=j;
			}
			else
			{
				for(int p = vis[a[j]];p<j;p++)
				{
					if(b[p]==-1)
					{
						continue;
					}
					b[p]=-1;
					vis[a[p]]=0;
				}
				vis[a[j]]=j;
			}
		}
		for(int j=i;j<=n;j++)
		{
			if(b[j]!=-1)
			{
				cnt[b[j]]++;
			}
			b[j]=a[j];
		}
	}
	for(int i = 1;i<=m;i++)
	{
		cout<<cnt[i]<<' ';
	}
	return 0;
}