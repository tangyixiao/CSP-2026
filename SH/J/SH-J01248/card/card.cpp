#include <bits/stdc++.h>
using namespace std;
long long n,m,a[10000001],vis[10000001],cnt[10000001];
long long c[10000001],s[10000001],b;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		vis[a[i]]=1;
	}
	for(int l=1;l<=n;l++)
	{
		int k=0;
		for(int i=0;i<=max(n,m);i++)
		{
			c[i]=0;
			s[i]=0;
		}
		for(int i=l;i<=n;i++)
		{
			k++;
			s[k]=a[i];
			c[a[i]]++;
			if(c[a[i]]==2)
			{
				b=a[i];
				for(int j=1;j<=i;j++)
				{
					if(s[j]==b)
					{
						k=j;
						break;
					}
				}
				for(int j=k;j<=max(n,m);j++)
				{
					s[j]=0;
					c[s[j]]--;
				}
				c[a[i]]=1;
				s[k]=b;
			}
		}
		for(int i=1;i<=k;i++)
		{
			cnt[s[i]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(vis[i]==1)
		{
			cout<<cnt[i]<<" ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
